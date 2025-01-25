#include <iostream>
#include <string>

using namespace std;

int main(){
    int rows;
    int columns;
    char symbol;

    cout << "how many rows: ";
    cin >> rows;
    cout << "how many columns: ";
    cin >> columns;
    cout << "what symbol do you want: ";
    cin >> symbol;

    // this decides how many times the nested loop will run, therefor making the rows, due to the "\n"
    for (int i = 1; i <= rows; i++){
        // this makes the columns due to it being a basic for loop, that gets called based on the loop outside of itself
        for (int j = 1; j <= columns; j++){
            cout << symbol;
        }
        cout << "\n";

    }

    return 0;
}