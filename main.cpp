#include "calculate.h"

int main(){
    int ipv4[4], decimalNum;
    for(int i = 0; i < 4; i++){
        std::cout << "Input your numbers of ip: ";
        std::cin >> decimalNum;
        ipv4[i] = decimalToBinary(decimalNum);
    }
    for(int j = 0; j < 4; j++){
       printf("%i\n", ipv4[j]); 
    }
    return 0;
}
