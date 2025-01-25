#include <iostream>

int main(){
    int firstNum;
    int secondNum;
    char operation;
    std::cout << "Pick your first number \n";
    std::cin >> firstNum;
    std::cout << "Do you want to add subtract multiply or divide \n" << "use + - * /\n";
    std::cin >> operation;
    std::cout << "Pick your second number \n";
    std::cin >> secondNum;

    switch(operation){
        case '+':
            std::cout << firstNum + secondNum;
            break;
        case '-':
            std::cout << firstNum - secondNum;
            break;
        case '*':
            std::cout <<  firstNum * secondNum;
            break;
        case '/':
            if (secondNum != 0){
                std::cout << firstNum / secondNum;
            } else{
                std::cout << "you cannot divide by zero \n";
            }
            break;
        default:
         std::cout << "enter in one of the operations (+ - * /)";
    }


}