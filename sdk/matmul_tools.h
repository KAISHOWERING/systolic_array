/******************************************************************************
*
* Copyright (C) 2009 - 2014 Xilinx, Inc.  All rights reserved.
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* Use of the Software is limited solely to applications:
* (a) running on a Xilinx device, or
* (b) that interact with a Xilinx device through a bus or interconnect.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
* XILINX  BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
* WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF
* OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*
* Except as contained in this notice, the name of the Xilinx shall not be used
* in advertising or otherwise to promote the sale, use or other dealings in
* this Software without prior written authorization from Xilinx.
*
******************************************************************************/

/*
 * helloworld.c: simple test application
 *
 * This application configures UART 16550 to baud rate 9600.
 * PS7 UART (Zynq) is not initialized by this application, since
 * bootrom/bsp configures it to baud rate 115200
 *
 * ------------------------------------------------
 * | UART TYPE   BAUD RATE                        |
 * ------------------------------------------------
 *   uartns550   9600
 *   uartlite    Configurable only in HW design
 *   ps7_uart    115200 (configured by bootrom/bsp)
 */

#ifndef __SYSTOLIC_TOOLS_MATMUL_H_
#define __SYSTOLIC_TOOLS_MATMUL_H_

#define MATMUL_USE_PYNQ     1              //!!! revert this before run on board, and need enough heap space
#define MATMUL_SIZE_BASE    8


class MatInt {
    int *MatBuf;
    int MatRowSize; // row number of matrix
    int MatColSize; // col number of matrix

    void MatMulSetBias(MatInt *input, MatInt *weight, MatInt *bias, MatInt *result);
    void MatMulNotSetBias(MatInt *input, MatInt *weight, MatInt *result);

public:
	MatInt(int row, int col) { MatRowSize = row; MatColSize = col; MatBuf = new int[MatRowSize * MatColSize];  
                                for(int i = 0; i < MatRowSize * MatColSize; ++i) MatBuf[i] = 0; }
	~MatInt() { delete[] MatBuf; }
    int Row() const { return MatRowSize; }
    int Col() const { return MatColSize; }
	int& operator()(int row, int col) { return MatBuf[row * MatColSize + col]; }

    void MatMulPartitionedWithInput(MatInt *input, MatInt *result);
    void MatMulConvolutionWithKernel(int kernelNum, MatInt *kernel, MatInt *result);
    void MatMulMaxpoolingWithBiasAndQuantitizer(const signed char bias, unsigned char fi, unsigned char fp, unsigned char fo, MatInt *result);
    void MatMulFullyConnectedWithKernelAndBiasAndQuantitizer(MatInt *kernel, const signed char *bias, unsigned char fi, unsigned char fp, unsigned char fo, MatInt *result);

};

void MatInt::MatMulPartitionedWithInput(MatInt *input, MatInt *result)
{
    // (*this) is a MatInt weight
    // MatMulPadding
    int weightPadRow = (this->Row() % MATMUL_SIZE_BASE == 0) ? (this->Row()) : (this->Row() / MATMUL_SIZE_BASE * MATMUL_SIZE_BASE + MATMUL_SIZE_BASE);
    int inputPadCol = (input->Col() % MATMUL_SIZE_BASE == 0) ? (input->Col()) : (input->Col() / MATMUL_SIZE_BASE * MATMUL_SIZE_BASE + MATMUL_SIZE_BASE);
    int commonPad = (this->Col() % MATMUL_SIZE_BASE == 0) ? (this->Col()) : (this->Col() / MATMUL_SIZE_BASE * MATMUL_SIZE_BASE + MATMUL_SIZE_BASE); // assert(weight->Col() == input->Row());
    MatInt weightPad{weightPadRow, commonPad};
    MatInt inputPad{commonPad, inputPadCol};
    for (int i = 0; i < this->Row(); ++i) {
        for (int j = 0; j < this->Col(); ++j) {
            weightPad(i, j) = (*this)(i, j); // padding zero except left-top area
        }
    }
    for (int i = 0; i < input->Row(); ++i) {
        for (int j = 0; j < input->Col(); ++j) {
            inputPad(i, j) = (*input)(i, j);
        }
    }
    // MatMulPartitioned
    MatInt resultPad{weightPadRow, inputPadCol};
    for(int i = 0; i < weightPadRow; i += MATMUL_SIZE_BASE) { // partition step is 8x8
        for(int j = 0; j < inputPadCol; j += MATMUL_SIZE_BASE) { // result 8x8 ij
            MatInt result8x8{MATMUL_SIZE_BASE, MATMUL_SIZE_BASE};
            for(int k = 0; k < commonPad; k += MATMUL_SIZE_BASE) {
                MatInt input8x8{MATMUL_SIZE_BASE, MATMUL_SIZE_BASE},weight8x8{MATMUL_SIZE_BASE, MATMUL_SIZE_BASE};
                for (int y = 0; y < MATMUL_SIZE_BASE; ++y) {
                    for (int x = 0; x < MATMUL_SIZE_BASE; ++x) { // prepare
                        input8x8(y, x) = inputPad(k + y, j + x); // inputPad 8x8 kj
                        weight8x8(y, x) = weightPad(i + y, k + x); // weightPad 8x8 ik
                    }
                }
                if (k == 0) { // first set bias to 0
                    MatInt bias8x8{MATMUL_SIZE_BASE, MATMUL_SIZE_BASE};
                    MatMulSetBias(&input8x8, &weight8x8, &bias8x8, &result8x8);
                }
                else {
                    MatMulNotSetBias(&input8x8, &weight8x8, &result8x8);
                }
            } // end of k
            for (int y = 0; y < MATMUL_SIZE_BASE; ++y) {
                for (int x = 0; x < MATMUL_SIZE_BASE; ++x) {
                    resultPad(i + y, j + x) = result8x8(y, x); // fetch
                }
            }
        } // end of j
    }
    // MatMulExtract
    for (int i = 0; i < result->Row(); ++i) { // assert((result->Row() == weight->Row()) && (result->Col() == input->Col()));
        for (int j = 0; j < result->Col(); ++j) {
            (*result)(i, j) = resultPad(i, j); // extract left-top area
        }
    }
}

void MatInt::MatMulConvolutionWithKernel(int kernelNum, MatInt *kernel, MatInt *result)
{
    // (*this) is a MatInt input
    // assert input size should be larger than kernel size
    //        kernel size should be the same
    //        result number should be the same as kernel number, result size should be the same, 
    //            result rowsize should be (this->Row() - kernel[0].Row() + 1) and result colsize should be (this->Col() - kernel[0].Col() + 1)
    // MatMulGenerate
    MatInt inputGen{(this->Row() - kernel[0].Row() + 1) * (this->Col() - kernel[0].Col() + 1), kernel[0].Row() * kernel[0].Col()};
    for (int i = 0; i < inputGen.Row(); ++i) {
        for (int j = 0; j < inputGen.Col(); ++j) {
            inputGen(i, j) = (*this)(i / (this->Col() - kernel[0].Col() + 1) + j / kernel[0].Col(), i % (this->Col() - kernel[0].Col() + 1) + j % kernel[0].Col());
        }
    }
    MatInt kernelGen{kernel[0].Row() * kernel[0].Col(), kernelNum};
    for (int j = 0; j < kernelGen.Col(); ++j) { // j before i better here
        for (int i = 0; i < kernelGen.Row(); ++i) {
            kernelGen(i, j) = (kernel[j])(i / kernel[0].Col(), i % kernel[0].Col());
        }
    }
    MatInt resultGen{(this->Row() - kernel[0].Row() + 1) * (this->Col() - kernel[0].Col() + 1), kernelNum};
    // MatMulMultiply
    inputGen.MatMulPartitionedWithInput(&kernelGen, &resultGen);
    // MatMulReshape
    for (int j = 0; j < resultGen.Col(); ++j) { // j before i better here
        for (int i = 0; i < resultGen.Row(); ++i) {
            (result[j])(i / result[0].Col(), i % result[0].Col()) = resultGen(i, j);
        }
    }
}

void MatInt::MatMulMaxpoolingWithBiasAndQuantitizer(const signed char bias, unsigned char fi, unsigned char fp, unsigned char fo, MatInt *result)
{
    // (*this) is a MatInt input
    // assert(this->Row() % 2 == 0 && this->Col() % 2 == 0);
    // assert(this->Row() / 2 == result->Row() && this->Col() / 2 == result->Col());
    // to disable bias, set bias as 0
    // to disable quantitizer, set fi, fp and fo as 0
    // to disable signed char limit, comment it out
    for (int i = 0; i < result->Row(); ++i) {
        for (int j = 0; j < result->Col(); ++j) {
            int maxValue;
            for (int k = 0; k < 4; ++k) { // max pooling 4
                if(k == 0 || (*this)(i * 2 + k / 2, j * 2 + k % 2) > maxValue) {
                    maxValue = (*this)(i * 2 + k / 2, j * 2 + k % 2);
                }
            }
            (*result)(i, j) = (signed char)((maxValue >> (fi + fp - fo)) + (bias >> (fp - fo)));
        }
    }
}

void MatInt::MatMulFullyConnectedWithKernelAndBiasAndQuantitizer(MatInt *kernel, const signed char *bias, unsigned char fi, unsigned char fp, unsigned char fo, MatInt *result)
{
    // (*this) is a MatInt input
    // assert(this->Row() == 1 && this->Col() == kernel->Row());
    // assert(result->Row() == 1 && result->Col() == kernel->Col());
    // assert(biasNum == kernel->Col());
    // to disable bias and quantitized etc, comment some out or set some as 0
    // MatMulMultiply
    this->MatMulPartitionedWithInput(kernel, result);
    // MatMul add bias and quantitized
    for (int i = 0; i < result->Row(); ++i) {
        for (int j = 0; j < result->Col(); ++j) {
            (*result)(i, j) += bias[j];
            if ((*result)(i, j) < 0) {
                (*result)(i, j) = 0;
            }
            else {
                (*result)(i, j) = (signed char)((*result)(i, j) >> (fi + fp - fo));
            }
        }
    }
}

#if MATMUL_USE_PYNQ
#include "xparameters.h"
#include "platform.h"
#include "xbram_hw.h"

// these address should be mutiplied by 4 to be 32-bits aligned in API call
#define MATMUL_INPUT_BASEADDR    64
#define MATMUL_WEIGH_BASEADDR    0
#define MATMUL_RESUL_BASEADDR    128
#define MATMUL_CONTR_BASEADDR    255


void MatInt::MatMulSetBias(MatInt *input, MatInt *weight, MatInt *bias, MatInt *result)
{
    for(int i = 0; i < MATMUL_SIZE_BASE; ++i) { // set bias
        for(int j = 0; j < MATMUL_SIZE_BASE; ++j) {
            XBram_WriteReg(XPAR_AXI_BRAM_CTRL_0_S_AXI_BASEADDR, (MATMUL_RESUL_BASEADDR + i * MATMUL_SIZE_BASE + j) * 4, (*bias)(i, j));
        }
    }
    for(int i = 0; i < MATMUL_SIZE_BASE; ++i) { // load weight
        for(int j = 0; j < MATMUL_SIZE_BASE; ++j) {
            XBram_WriteReg(XPAR_AXI_BRAM_CTRL_0_S_AXI_BASEADDR, (MATMUL_WEIGH_BASEADDR + j * MATMUL_SIZE_BASE + i) * 4, (*weight)(i, j)); //!!! weight should be transposed
        }
    }
    for(int i = 0; i < MATMUL_SIZE_BASE; ++i) { // load input
        for(int j = 0; j < MATMUL_SIZE_BASE; ++j) {
            XBram_WriteReg(XPAR_AXI_BRAM_CTRL_0_S_AXI_BASEADDR, (MATMUL_INPUT_BASEADDR + i * MATMUL_SIZE_BASE + j) * 4, (*input)(i, j));
        }
    }

    XBram_WriteReg(XPAR_AXI_BRAM_CTRL_0_S_AXI_BASEADDR, MATMUL_CONTR_BASEADDR * 4, 0); // start
    while (XBram_ReadReg(XPAR_AXI_BRAM_CTRL_0_S_AXI_BASEADDR, MATMUL_CONTR_BASEADDR * 4) != 1); // finish

    for(int i = 0; i < MATMUL_SIZE_BASE; ++i) { // fetch result
        for(int j = 0; j < MATMUL_SIZE_BASE; ++j) {
            (*result)(i, j) = XBram_ReadReg(XPAR_AXI_BRAM_CTRL_0_S_AXI_BASEADDR, (MATMUL_RESUL_BASEADDR + i * MATMUL_SIZE_BASE + j) * 4);
        }
    }
}

void MatInt::MatMulNotSetBias(MatInt *input, MatInt *weight, MatInt *result)
{
    for(int i = 0; i < MATMUL_SIZE_BASE; ++i) { // load weight
        for(int j = 0; j < MATMUL_SIZE_BASE; ++j) {
            XBram_WriteReg(XPAR_AXI_BRAM_CTRL_0_S_AXI_BASEADDR, (MATMUL_WEIGH_BASEADDR + j * MATMUL_SIZE_BASE + i) * 4, (*weight)(i, j)); //!!! weight should be transposed
        }
    }
    for(int i = 0; i < MATMUL_SIZE_BASE; ++i) { // load input
        for(int j = 0; j < MATMUL_SIZE_BASE; ++j) {
            XBram_WriteReg(XPAR_AXI_BRAM_CTRL_0_S_AXI_BASEADDR, (MATMUL_INPUT_BASEADDR + i * MATMUL_SIZE_BASE + j) * 4, (*input)(i, j));
        }
    }

    XBram_WriteReg(XPAR_AXI_BRAM_CTRL_0_S_AXI_BASEADDR, MATMUL_CONTR_BASEADDR * 4, 0); // start
    while (XBram_ReadReg(XPAR_AXI_BRAM_CTRL_0_S_AXI_BASEADDR, MATMUL_CONTR_BASEADDR * 4) != 1); // finish

    for(int i = 0; i < MATMUL_SIZE_BASE; ++i) { // fetch result
        for(int j = 0; j < MATMUL_SIZE_BASE; ++j) {
            (*result)(i, j) = XBram_ReadReg(XPAR_AXI_BRAM_CTRL_0_S_AXI_BASEADDR, (MATMUL_RESUL_BASEADDR + i * MATMUL_SIZE_BASE + j) * 4);
        }
    }
}

#else
void init_platform() {;}

void cleanup_platform() {;}

static MatInt globalresult{MATMUL_SIZE_BASE, MATMUL_SIZE_BASE}; //

void MatInt::MatMulSetBias(MatInt *input, MatInt *weight, MatInt *bias, MatInt *result)
{
    for(int i = 0; i < MATMUL_SIZE_BASE; ++i) {
        for(int j = 0; j < MATMUL_SIZE_BASE; ++j) {
            globalresult(i, j) = (*bias)(i, j);
        }
    }

    for(int i = 0; i < MATMUL_SIZE_BASE; ++i) {
        for(int j = 0; j < MATMUL_SIZE_BASE; ++j) {
            for(int k = 0; k < MATMUL_SIZE_BASE; ++k) {
                globalresult(i, j) += (*weight)(i, k) * (*input)(k, j); // weight is before input
            }
        }
    }

    for(int i = 0; i < MATMUL_SIZE_BASE; ++i) {
        for(int j = 0; j < MATMUL_SIZE_BASE; ++j) {
            (*result)(i, j) = globalresult(i, j);
        }
    }
}

void MatInt::MatMulNotSetBias(MatInt *input, MatInt *weight, MatInt *result)
{
    for(int i = 0; i < MATMUL_SIZE_BASE; ++i) {
        for(int j = 0; j < MATMUL_SIZE_BASE; ++j) {
            for(int k = 0; k < MATMUL_SIZE_BASE; ++k) {
                globalresult(i, j) += (*weight)(i, k) * (*input)(k, j); // weight is before input
            }
        }
    }

    for(int i = 0; i < MATMUL_SIZE_BASE; ++i) {
        for(int j = 0; j < MATMUL_SIZE_BASE; ++j) {
            (*result)(i, j) = globalresult(i, j);
        }
    }
}
#endif


#endif