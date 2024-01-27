#include "calculate.h"

void binCount(){
    int arr[4], decimalNum;
    for(int i = 0; i < 4; i++){
        std::cout << "Input your octet ip: ";
        std::cin >> decimalNum;
        arr[i] = decimalToBinary(decimalNum);
    }
    for(int j = 0; j < 4; j++){
        printf("%.8i ",arr[j]);
    }
}
