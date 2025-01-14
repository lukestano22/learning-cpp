#include <iostream>


// the ternary operator is used as a kind of replacement for a simple if else statement
//makes code look cleaner

int main(){
    int grade;
    std::cout << "What score did you get on the test? \n";
    std::cin >> grade;

    grade >= 70 ? std::cout << "You passed!" : std::cout << "you FAILED!!!!!";

    return 0;
}