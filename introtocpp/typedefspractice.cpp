#include <iostream>
#include <vector>

// typedef is used to give a type a new name. It is used to make the code more readable.
// typedef std::string text_t;
// typedef int number_t;
// typedef bool boolean_t;

// another way to do this is to use the using keyword
using text_t = std::string;
using number_t = int;
using boolean_t = bool;

int main() {
    text_t name = "Mady";
    number_t age = 21;
    boolean_t isAdult = true;


    std::cout << name << "\n"; // Output: Mady
    std::cout << "age: " << age << "\n";

    return 0;
}

// in conclusion, typedef/using is used to give a type a new name. It is used to make the code more readable.
