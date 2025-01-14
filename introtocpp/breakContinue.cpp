#include <iostream>
#include <string>

using namespace std;

int main(){

    for(int i = 0; i < 10; i++){
        // skips 5
        if (i == 5){
            continue;
        //stops at 8
        } else if (i == 8){
            break;
        }
        cout << i << "\n";
    }


    return 0;
}