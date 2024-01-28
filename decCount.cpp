#include "calculate.h"

class Result{
    public:
        int arr[4], x;
        std::string input;
        void helpToCalcFunc(int i){
            std::cout << input;
            std::cin >> x;
            arr[i] = binaryToDecimal(x);
        }
};

void decCount(){
    Result AndResult;
    AndResult.input = "Input your help result in binary";
    for(int i = 0; i < 4; i++){
        AndResult.helpToCalcFunc(i);
    } 
}
