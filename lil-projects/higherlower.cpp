#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){
    srand(time(0));
    int userGuess;

    int randomNum = rand() % 101;
    std::cout << "Guess a number 1-100! \n";
    std::cin >> userGuess;
    while (userGuess != randomNum){
        if (userGuess < randomNum){
            std::cout << "your guess was too low \n guess again \n";
            std::cin >> userGuess;
        } else if (userGuess > randomNum){
            std::cout << "your guess was too high \n guess again \n";
            std::cin >> userGuess;
        }
    }
    std::cout << "You guessed correct! The correct Number was " << randomNum << "!\n";
    return 0;
}   