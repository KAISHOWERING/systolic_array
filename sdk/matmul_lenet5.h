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

#ifndef __SYSTOLIC_LENET5_MATMUL_H_
#define __SYSTOLIC_LENET5_MATMUL_H_

#include "matmul_tools.h"
#include "matmul_lenet5table.h"


#if MATMUL_USE_PYNQ
#include <stdio.h>
void GetFirstInputQuantitized(MatInt *FirstInput)
{
    for (int i = 0; i < FirstInput->Row() * FirstInput->Col(); ++i) {
        (*FirstInput)(i / FirstInput->Col(), i % FirstInput->Col()) = (unsigned char)getchar();
    }
}

void SendSixthOutputQuantitized(MatInt *SixthOutput)
{
    char buffer[12];
    int maxValue, judgement;
    for (int i = 0; i < 10; ++i) {
        if (i == 0 || (*SixthOutput)(0, i) > maxValue) {
            maxValue = (*SixthOutput)(0, i);
            judgement = i;
        }
    }
    buffer[0] = judgement;
    for(int i = 0; i < 10; ++i) {
        buffer[i + 1] = (*SixthOutput)(0, i);
    }
    buffer[11] = 0;
    fwrite(buffer, 1, 11, stdout);
    fflush(stdout);
}

#else
#include <iostream>
#include <fstream>
void GetFirstInputQuantitized(MatInt *FirstInput)
{
    std::fstream f;
    f.clear();
    f.open("./data/image.txt");
    for (int i = 0; i < FirstInput->Row() * FirstInput->Col() * 0; ++i) {
        int tmp = 0;
        f >> tmp;
        f.get();
    }
    for (int i = 0; i < FirstInput->Row() * FirstInput->Col(); ++i) {
        int tmp = 0;
        f >> tmp;
        (*FirstInput)(i / FirstInput->Col(), i % FirstInput->Col()) = (unsigned char)tmp;
        f.get();
    }
    f.close();
}

void SendSixthOutputQuantitized(MatInt *SixthOutput)
{
    int maxValue, judgement;
    for (int i = 0; i < 10; ++i) {
        if (i == 0 || (*SixthOutput)(0, i) > maxValue) {
            maxValue = (*SixthOutput)(0, i);
            judgement = i;
        }
    }
    std::cout << "judgement is " << judgement << std::endl;
    for(int i = 0; i < 10; ++i) {
        std::cout << (*SixthOutput)(0, i) << ",";
    }
    std::cout << std::endl;
}
#endif

void ReadCurrentKernelQuantitized(int kernelNum, MatInt *CurrKernel, const signed char *CurrKernelArray, int dataPage, int dataPageNum, bool transpose)
{
    for (int i = 0; i < kernelNum; ++i) {
        for(int j = 0; j < CurrKernel[i].Row(); ++j) {
            for (int k = 0; k < CurrKernel[i].Col(); ++k) {
                if (!transpose) { // only and only if fully connected kernel need transpose
                    (CurrKernel[i])(j, k) = CurrKernelArray[(i * CurrKernel[i].Row() * CurrKernel[i].Col() + j * CurrKernel[i].Col() + k) * (dataPageNum) + dataPage];
                }
                else {
                    (CurrKernel[i])(j, k) = CurrKernelArray[(i * CurrKernel[i].Row() * CurrKernel[i].Col() + k * CurrKernel[i].Row() + j) * (dataPageNum) + dataPage];
                }
            }
        }
    }
}


void Lenet5()
{
    // get input 28x28
    MatInt *FirstInput = new MatInt{28, 28};
    GetFirstInputQuantitized(FirstInput);

    // first conv layer: 28x28(u8) to 10x24x24
    MatInt *FirstKernel = new MatInt[10]{{5, 5}, {5, 5}, {5, 5}, {5, 5}, {5, 5}, {5, 5}, {5, 5}, {5, 5}, {5, 5}, {5, 5}};
    ReadCurrentKernelQuantitized(10, FirstKernel, FirstKernelArray, 0, 1, 0);
    MatInt *FirstOutput = new MatInt[10]{{24, 24}, {24, 24}, {24, 24}, {24, 24}, {24, 24}, {24, 24}, {24, 24}, {24, 24}, {24, 24}, {24, 24}};
    (*FirstInput).MatMulConvolutionWithKernel(10, FirstKernel, FirstOutput);
    delete FirstInput;
    delete[] FirstKernel;

    // second maxpooling layer: 10x24x24 to 10x12x12
    MatInt *SecondOutput = new MatInt[10]{{12, 12}, {12, 12}, {12, 12}, {12, 12}, {12, 12}, {12, 12}, {12, 12}, {12, 12}, {12, 12}, {12, 12}};
    for (int i = 0; i < 10; ++i) {
        (FirstOutput[i]).MatMulMaxpoolingWithBiasAndQuantitizer(SecondBias[i], 8, 3, 5, &(SecondOutput[i]));
    }
    delete[] FirstOutput;

    // third conv layer: 10x12x12(s8) to 10x(20x8x8) to 20x8x8
    MatInt *ThirdKernelTemp = new MatInt[20]{{5, 5}, {5, 5}, {5, 5}, {5, 5}, {5, 5}, {5, 5}, {5, 5}, {5, 5}, {5, 5}, {5, 5},
                                            {5, 5}, {5, 5}, {5, 5}, {5, 5}, {5, 5}, {5, 5}, {5, 5}, {5, 5}, {5, 5}, {5, 5}};
    MatInt *ThirdOutputTemp = new MatInt[20]{{8, 8}, {8, 8}, {8, 8}, {8, 8}, {8, 8}, {8, 8}, {8, 8}, {8, 8}, {8, 8}, {8, 8},
                                                {8, 8}, {8, 8}, {8, 8}, {8, 8}, {8, 8}, {8, 8}, {8, 8}, {8, 8}, {8, 8}, {8, 8}};
    MatInt *ThirdOutput = new MatInt[20]{{8, 8}, {8, 8}, {8, 8}, {8, 8}, {8, 8}, {8, 8}, {8, 8}, {8, 8}, {8, 8}, {8, 8},
                                            {8, 8}, {8, 8}, {8, 8}, {8, 8}, {8, 8}, {8, 8}, {8, 8}, {8, 8}, {8, 8}, {8, 8}};
    for (int i = 0; i < 10; ++i) {
        ReadCurrentKernelQuantitized(20, ThirdKernelTemp, ThirdKernelArray, i, 10, 0);
        (SecondOutput[i]).MatMulConvolutionWithKernel(20, ThirdKernelTemp, ThirdOutputTemp);
        for (int j = 0; j < 20; ++j) {
            for (int y = 0; y < ThirdOutput[j].Row(); ++y) {
                for (int x = 0; x < ThirdOutput[j].Col(); ++x) {
                    (ThirdOutput[j])(y, x) += (ThirdOutputTemp[j])(y, x);
                }
            }
        }
    }
    delete[] SecondOutput;
    delete[] ThirdKernelTemp;
    delete[] ThirdOutputTemp;

    // fourth maxpooling layer: 20x8x8 to 20x4x4
    MatInt *FourthOutput = new MatInt[20]{{4, 4}, {4, 4}, {4, 4}, {4, 4}, {4, 4}, {4, 4}, {4, 4}, {4, 4}, {4, 4}, {4, 4},
                                            {4, 4}, {4, 4}, {4, 4}, {4, 4}, {4, 4}, {4, 4}, {4, 4}, {4, 4}, {4, 4}, {4, 4}};
    for (int i = 0; i < 20; ++i) {
        (ThirdOutput[i]).MatMulMaxpoolingWithBiasAndQuantitizer(FourthBias[i], 5, 4, 3, &(FourthOutput[i]));
    }
    delete[] ThirdOutput;

    // fifth fully connected: 20x4x4(s8) to 1x320 to 1x200
    MatInt *FifthInput = new MatInt{1, 320};
    for (int i = 0; i < FifthInput->Col(); ++i) {
        (*FifthInput)(0, i) = (FourthOutput[i / (FourthOutput[0].Row() * FourthOutput[0].Col())])((i % (FourthOutput[0].Row() * FourthOutput[0].Col())) / FourthOutput[0].Col(),
                                                                                                    (i % (FourthOutput[0].Row() * FourthOutput[0].Col())) % FourthOutput[0].Col());
    }
    delete[] FourthOutput;
    MatInt *FifthKernel = new MatInt{320, 200};
    ReadCurrentKernelQuantitized(1, FifthKernel, FifthKernelArray, 0, 1, 1);
    MatInt *FifthOutput = new MatInt{1, 200};
    FifthInput->MatMulFullyConnectedWithKernelAndBiasAndQuantitizer(FifthKernel, FifthBias, 3, 5, 3, FifthOutput);
    delete FifthInput;
    delete FifthKernel;

    // sixth fully connected: 1x200(s8) to 1x10
    MatInt *SixthKernel = new MatInt{200, 10};
    ReadCurrentKernelQuantitized(1, SixthKernel, SixthKernelArray, 0, 1, 1);
    MatInt *SixthOutput = new MatInt{1, 10};
    FifthOutput->MatMulFullyConnectedWithKernelAndBiasAndQuantitizer(SixthKernel, SixthBias, 3, 4, 2, SixthOutput);
    delete FifthOutput;
    delete SixthKernel;

    // send output 1x10
    SendSixthOutputQuantitized(SixthOutput);
    delete SixthOutput;
}


#endif