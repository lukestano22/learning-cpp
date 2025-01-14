#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string fullName;

    cout << "tell me ur full name. \n";
    getline(cin, fullName);

    // .length() finds the length of all characters in a string
    if (fullName.length() > 12){
        cout << "long ahh name. \n";
    // checks to see if the string is empty
    } else if(fullName.empty()){
        cout << "You didnt even enter ur name, stupid ahh.";
    }else{
        cout << "mee mee mee moe. \n";
    }

    // finds the space in the string and deletes only that space
    fullName.erase(fullName.find(' '), 1);

    // cout << "Your email could be " << fullName.append("@gmail.com") << "\n";
    cout << "your ig tag could be " << fullName.insert(0, "@") << "\n";

    return 0;
}

/*
list of different methods:
.length() - finds the length in all characters in a string
.empty() - checks to see if a string is empty
.clear() - clears/ erases a string
.append() - adds text to the end of a string
.at() - displays the character at whatever number is listed in parentheses
.insert() - takes two arguments. the first is the location of what you want to edit, the second is what you want to add.
.find() - finds the position of what you type in
.erase() - takes two arguments. 1: the position you want to start deleting, 2: how many characters you want to delete from there
*/