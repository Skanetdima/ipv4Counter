#include "calculate.h"

void maskCount(){
    int maskNum[32] = {0}, maskInput;
    std::cin >> maskInput;

    for(int i = 0; i < maskInput; i++){
        maskNum[i] = 1;
    }
    for(int j = 0; j < 32; j++){
        if(j % 7 == 0 && j != 0)
            printf("%i ", maskNum[j]);
        printf("%i", maskNum[j]);
    }
}
