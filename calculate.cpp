#include "calculate.h"

int binaryToDecimal(long long x) {
    int dec = 0, i = 0, rem;

    while (x !=0) {
        rem = x % 10;
        x /= 10;
        dec += rem * pow(2, i);
        ++i;
                            
    }
    return dec;
        
}


long long decimalToBinary(int x) {
    long long bin = 0;
    int rem, i = 1;

    while (x !=0) {
        rem = x % 2;
        x /= 2;
        bin += rem * i;
        i *= 10;                          
        
    }
    return bin;
          
}
