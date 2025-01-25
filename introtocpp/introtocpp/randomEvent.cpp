#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
    //resets the random to get a different number each time
    srand(time(0));
    // adding the + 1 changes the value from 0,4 to 1,5
    int randomValue = rand() % 5 + 1;

    switch(randomValue){
        case 1:
            cout << "option 1";
            break;
        case 2:
            cout << "option 2";
            break;
        case 3:
            cout << "option 3";
            break;
        case 4:
            cout << "option 4";
            break;
        case 5:
            cout << "option 5";
            break;
    }

    return 0;
}