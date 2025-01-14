#include <iostream>
#include <ctime>
#include <cstdlib>


using namespace std;

int main(){
    // resets the random every time page is refreshed, otherwise the number will always stay the same 
    srand(time(0));
    int limit;
    cout << "set what you want the limit to be \n";
    cin >> limit;

    // adding one because the number starts at 0
    int randomNum = rand() % limit + 1;

    cout << randomNum;



    return 0;
}