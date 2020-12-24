#include <verilated.h>
#include "Vtop.h"

double time_stamp = 0.0;

double sc_time_stamp(){
    return time_stamp;
}

class Wrapper{
public:
    Wrapper(Vtop *top)
        : top(top)
    {
        top->clk_i = 0;
        top->rst_i = 1;
        top->addr_i = 0;
        top->data_i = 0;
        top->wr_vi = 0;
        top->eval();
    }

    void reset(){//1p
        time_stamp += 1;
        top->rst_i = 0; // reset
        top->eval();

        time_stamp += 1;
        top->rst_i = 1; //
        top->eval();
    }

    void tick(){//1p
        time_stamp += 1;
        top->clk_i = 1;
        top->eval();

        time_stamp += 1;
        top->clk_i = 0;
        top->eval();
    }

    int readValue(int addr){//1p
        // return base[addr];
        top->addr_i = addr;
        top->wr_vi = 0;
        top->eval();
        tick();
        return top->data_o;
    }

    void writeValue(int addr, int data){//1p
        // base[addr] = data;
        top->addr_i = addr; 
        top->data_i = data;
        top->wr_vi = 1;
        top->eval();
        tick();
        top->wr_vi = 0;
    }

    void setBias(int data[8][8]){
        for(int i = 0; i < 8; ++i){
            for(int j = 0; j < 8; ++j){
                writeValue(i * 8 + j +128, data[i][j]);
            }

        }
    }

    void fetchResult(int result[8][8]){
        for(int i = 0; i < 8; ++i){
            for(int j = 0; j < 8; ++j){
               result[i][j] = readValue(i*8 + j + 128);
            }
        }       

    }

    void matrixMultiply(//64p+64p+1p+200p+64p=393p
        char input[8][8],
        char weight[8][8]
    ){
        // load weight
        for(int i = 0; i < 8; ++i){
            for(int j = 0; j < 8; ++j){
                writeValue(i*8 + j, weight[i][j]);
            }
        }
        // load input
        for(int i = 0; i < 8; ++i){
            for(int j = 0; j < 8; ++j){
                writeValue(i*8 + j + 64, input[i][j]);
            }
        }
        // start
        writeValue(255, 0);
        top->wr_vi = 1;
        tick();
        top->wr_vi = 0;
        while (readValue(255) != 1) tick();
        // for(int i =0; i < 200; ++i) tick();
        // fetch output

    }

private:
    Vtop *top;
};

int main(int argc, char* argv[]) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    Vtop *top = new Vtop{};
    Wrapper w{top};
    
    w.reset();
    w.tick();

    char weight[8][8];
    char input[8][8];
    int  result[8][8];
    for(int i = 0; i < 8; ++i){
        for(int j = 0; j < 8; ++j){
            weight[j][i] = (i==7)?0:i+j;
            input[i][j] = (j==7)?0:i*j;           
            result[i][j] = 0;
        }
    }


    
    w.setBias(result);
    w.matrixMultiply(input, weight);//393p
    // w.matrixMultiply(input, weight);
    // w.matrixMultiply(input, weight);
    w.fetchResult(result);
    printf("Rsult:\n");
    for(int i = 0; i < 8; ++i){
        for(int j = 0; j < 8; ++j){
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    top->final();
    delete top;
    return 0;
}

