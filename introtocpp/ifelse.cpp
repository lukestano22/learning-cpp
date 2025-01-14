#include <iostream>


int main(){
    int num1 = 8;
    int num2 = 5;


    // if statements in c++ are very similar to javascript
    if (num1 > num2){
        std::cout << "num1 is > num2 \n";
    } else if(num1 == num2){
        std::cout << "num1 = num2 \n";
    } else {
        std::cout << "num1 < num2 \n";
    }

    return 0;
}

