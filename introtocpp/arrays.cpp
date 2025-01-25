#include <iostream>
#include <string>

using namespace std;

int main(){

    string cars[] = {"BMW", "Ford", "Toyota"};

    cars[0] = "mustang";

    cout << cars[0] << "\n";
    cout << cars[1] << "\n";
    cout << cars[2] << "\n";

    // you can iterate over an array with a forloop
    for (int i = 0; i < sizeof(cars) / sizeof(string); i++){
        cout << cars[i];
    }


    return 0;
}