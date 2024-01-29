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
        void helpToPrintFunc(int i){
            if(i == 3)
                printf("%i", arr[i]);
            else
                printf("%i.", arr[i]);
        }

}; //Class that transforms binary to digits;

void decCount(){
    Result AndResult, NotResult;
    AndResult.input = "Input your help result in binary from action of and: ";
    NotResult.input = "Input your help result in binary from action of not: ";
    for(int i = 0; i < 4; i++){
        AndResult.helpToCalcFunc(i);
    }
    for(int i = 0; i < 4; i++){
        NotResult.helpToCalcFunc(i);
    }
    for(int i = 0; i < 4; i++){
        AndResult.helpToPrintFunc(i);
    }
    std::cout << std::endl;

    for(int i = 0; i < 4; i++){
        NotResult.helpToPrintFunc(i);
    }
        
}
