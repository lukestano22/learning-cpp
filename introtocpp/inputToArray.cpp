#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main(){

    string favoriteFoods[5];
    int size = sizeof(favoriteFoods) / sizeof(favoriteFoods[0]);

    for(int i = 0; i < size; i++){
        cout << "Enter a food you like or 'q' to quit. Food #" << i + 1 << "\n";
        string input;
        getline(cin, input);
        if(input == "q"){
            break;
        }
        favoriteFoods[i] = input;
    }

    cout << "\n" << "You like the following foods:" << "\n";

    for(string food: favoriteFoods){
        cout << food << "\n";
    }
    return 0;
}