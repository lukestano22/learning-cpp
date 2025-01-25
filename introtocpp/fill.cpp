#include <iostream>
#include <string>

using namespace std;


int main(){

    // fill fills an array with a range of elements with 3 specified values, (beginning, end, value)
    int size = 99;
    string foods[size];

    //fill array with equal parts of 3 foods
    fill(foods, foods + (size / 3), "sushi");
    fill(foods + (size / 3), foods + (size / 3 * 2) , "ribeye");
    fill(foods + (size / 3 * 2), foods + size, "durgey");




    for(string food : foods){
        cout << food << "\n";
    };


    return 0;
}