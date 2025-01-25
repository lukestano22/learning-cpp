#include <iostream>

int main(){
    char letterGrade;
    std::cout << "What letter grade did you get? (A, B, C, D, F) \n";
    std::cin >> letterGrade;

    switch(letterGrade){
        case 'A':
            std::cout << "Wow that's amazing! Good Job! \n";
            break;
        case 'B':
            std::cout << "thats pretty solid. \n";
            break;
        case 'C':
            std::cout << "ehh, not horrible. \n";
            break;
        case 'D':
            std::cout << "dang dude, at least you passed. \n";
            break;
        case 'F':
            std::cout << "You are not smart. \n";
            break;
        default:
            std::cout << "Make sure you enter one of the capital letters A, B, C, D or F";

    }


    return 0;
}