#include "calculate.h"

class DecimalInput{
    public:
        std::string Input;
        int arr[4], decimalNum, checkNum;
        void helpToCalcFunc(int i){
            std::cout << Input;
            std::cin >> decimalNum;
            arr[i] = decimalToBinary(decimalNum);
        }
        
        void helpToPrintFunc(int i){
            printf("%.8i ", arr[i]);
        }

}; // Class which gets different input from user;

void binCount(){

    DecimalInput ipV4, maskV4;
    
    ipV4.Input = "Input your octet for ip: ";
    maskV4.Input = "Input your octet for mask: ";
    
    for(int i = 0; i < 4; i++)
        ipV4.helpToCalcFunc(i);

    for(int i = 0; i < 4; i++)
        maskV4.helpToCalcFunc(i);
    
    for(int i = 0; i < 4; i++)
        ipV4.helpToPrintFunc(i);
   
    std::cout << std::endl;

    for(int i = 0; i < 4; i++)
        maskV4.helpToPrintFunc(i);

}
