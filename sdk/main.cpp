/***********************************************************************************
************************************************************************************
**                                                                                **
**  File        : main.cpp                                                        **
**  Contributor : SQ Lin, YK Lin, BJ Hou                                          **
**  Date        : 2020-12-24                                                      **
**  Description : Main function to run a handwritten numeral recognition program  **
**                using a LeNet-5 like neural network.                            **
**                Running with/without PYNQ is both supported. To run without     **
**                PYNQ, change MATMUL_USE_PYNQ in "matmul_tools.h" to 0.          **
**                This file refers to the helloworld.c template described below.  **             
**                                                                                **
************************************************************************************
***********************************************************************************/
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

#include <iostream>
#include "matmul_lenet5.h"


int main()
{
    init_platform();

#if MATMUL_USE_PYNQ
    setbuf(stdin, NULL);
    while(1) {
#endif
        Lenet5();
#if MATMUL_USE_PYNQ
    }
#endif

    cleanup_platform();
    return 0;
}