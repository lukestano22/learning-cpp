#include <iostream>
#include <string>

using namespace std;

//calling the function before where its called
double getTotal(double prices[], int size);

int main(){
    double prices[] = {19.99, 17.74, 6.85, 42.93};
    // finds how many objects are stored in an array by dividing the size of all objects by one
    int size = sizeof(prices) / sizeof(prices[0]);
    // calls the funciton
    double total = getTotal(prices, size);

    cout << "$" << total << "\n";

    return 0;
}


double getTotal(double prices[], int size){
    double total = 0;
    // for loop to add all the prices together
    for(int i = 0; i < size; i++){
        total += prices[i];
    }
    // make sure to return the value
    return total;
}
