#include <iostream>
#include <string>

using namespace std;

int main(){

    double gpa = 3.5;

    //sizeof determines the size in bytes of data types
    cout << sizeof(gpa) << " bytes \n";

    double grades[] = {85, 75, 92, 76, 99};

    // we can find out how many items are in an array with this method
    cout << sizeof(grades) / sizeof(double);
    // this will show "5" in the output


    return 0;
}