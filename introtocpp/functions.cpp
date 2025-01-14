#include <iostream>
#include <string>

using namespace std;

void happybirthday(string name){
    cout << "happy borthday to " << name << "\n";
}

int main(){

    string myName = "luke";
    happybirthday(myName);

    return 0;
}