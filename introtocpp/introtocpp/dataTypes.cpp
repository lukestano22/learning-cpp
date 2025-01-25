#include <iostream>



int main() {
    // int is a whole number data type.
    int x = 5;
    int y = 6;
    // placing const before a variable makes it a constant. Constants cannot be changed.
    const int z = x + y;

    // double is decimal number data type.
    double a = 5.5;

    // char is a single character data type.
    char grade = 'A';

    // bool is a boolean data type (true or false).
    bool isTrue = true;

    // string is a sequence of characters. Unlike other data types, string is not a primitive data type.
    std::string name = "Mady";
    std::string address = "1234 Main St";

    std::cout << "Hello " << name;
    return 0;
}
