#include <iostream>
#include <string>

using namespace std;

int main(){

    int grades[] = {65, 82, 97, 56, 85};

    // for every "grade"(could be any variable) in grades, output the grades.
    for(int grade : grades){
        cout << grade << "\n";
    }

    return 0;
}