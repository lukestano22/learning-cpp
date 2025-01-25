#include <iostream>
#include <vector>

int main() {
    
    double students = 20;
    // to add more students to the class, you can use the += operator.
    students += 5;
    // if you only want to add one student, you can use the ++ operator.
    students++;
    // to remove students from the class, you can use the -= operator.
    students -= 2;
    // if you only want to remove one student, you can use the -- operator.
    students--;
    // Oh no! half of the students dropped out. You can divide the number of students by 2.
    students /= 2;
    // The class is now full! You can multiply the number of students by 2.
    students *= 1.5;

    // the double data type is used to store decimal numbers.
    std::cout << students;


    return 0;
}