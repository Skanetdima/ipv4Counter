#include "calculate.h"
#include <iostream>
#include <string.h>
int binaryToDecimal(int x){
    int num = x;
    int decimalValue = 0;
    int base = 1;

    int temp = num;
    while(temp){
        int lastDigit = temp % 10;
        temp = temp / 10;
        decimalValue += lastDigit * base;
        base *= 2;
    }
    return decimalValue;
}

int decimalToBinary(int x){
    int binaryNum[32];
    int i = 0;
    while (x > 0){
        binaryNum[i] = x % 2;
        x /= 2;
        i++;
    }
    for(int j = i - 1; j >= 0; j--){
        binaryNum[] = binaryNum[j]; 
    }
    return *binaryNum;
}
