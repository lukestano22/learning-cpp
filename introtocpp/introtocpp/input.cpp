#include <iostream>
#include <vector>

int main(){
    std::string name;

    // cout is output: c- out
    std::cout << "what's your name?" << "\n";
    // cin is input: c- in. Also the arrows go the opposite way >>
    std::cin >> name;
    std::cout << "\n" << "Hello " << name << "!";
    return 0;
}