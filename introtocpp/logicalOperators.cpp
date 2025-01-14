#include <iostream>

int main(){
    int temp;

    std::cout << "enter the temp \n";
    std::cin >> temp;

    // both need to be true. && == and
    if (temp > 32 && temp < 80){
        std::cout << "the temp is good \n";
    // only one needs to be true. || == or
    } else if (temp <= 32 || temp >= 80){
        std::cout << "extreme temps \n";
    }

    return 0;
}