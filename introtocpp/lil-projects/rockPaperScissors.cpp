#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
    srand(time(0));
    int computerChoice;
    char userChoice;

    // this gets called and does all of this right a way, but if the while statement is true, it gets called until it isnt true.
    do{
        cout << "ROCK, PAPER, SCISSORS (pick one: r, p, s): ";
        cin >> userChoice;

        int computerChoice = rand() % 3 + 1;

        switch(computerChoice){
            case 1:
                cout << "Ai picked rock.";
                if (userChoice == 'r') {
                        cout << "It's a tie!\n";
                } else if (userChoice == 'p'){
                    cout << "YOU WIN!";
                } else if (userChoice == 's'){
                    cout << "YOU LOSE!";
                } else{
                    cout << "Please enter one of these characters: r, p, s ";
                }
                break;
            case 2:
                cout << "Ai picked paper.";
                if (userChoice == 'p') {
                        cout << "It's a tie!\n";
                } else if (userChoice == 's'){
                    cout << "YOU WIN!";
                } else if (userChoice == 'r'){
                    cout << "YOU LOSE!";
                } else{
                    cout << "Please enter one of these characters: r, p, s ";
                }
                break;
            case 3:
                cout << "Ai picked scissors.";
                if (userChoice == 's') {
                        cout << "It's a tie!\n";
                } else if (userChoice == 'r'){
                    cout << "YOU WIN!";
                } else if (userChoice == 'p'){
                    cout << "YOU LOSE!";
                } else{
                    cout << "Please enter one of these characters: r, p, s ";
                }
                break;

        }

    } while(userChoice == 'r' || userChoice == 'p' || userChoice == 's' && computerChoice == userChoice);

}