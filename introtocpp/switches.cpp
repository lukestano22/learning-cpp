#include <iostream>

int main(){
    // switches are used as a sort of replacement to if statements
    int month;
    std::cout << "enter a month (1-12) \n";
    std::cin >> month;

    switch(month){
        case 1:
            std::cout << "it is january \n";
            break;
        case 2:
            std::cout << "it is february \n";
            break;
        case 3:
            std::cout << "it is march \n";
            break;
        case 4:
            std::cout << "it is april \n";
            break;
        case 5:
            std::cout << "it is may \n";
            break;
        case 6:
            std::cout << "it is june \n";
            break;
        case 7:
            std::cout << "it is july \n";
            break;
        case 8:
            std::cout << "it is august \n";
            break;
        case 9:
            std::cout << "it is september \n";
            break;
        case 10:
            std::cout << "it is october \n";
            break;
        case 11:
            std::cout << "it is november \n";
            break;
        case 12:
            std::cout << "it is december \n";
            break;
        // if something that's entered in isnt 1-12, this message will be displayed (basically an else statement)
        default: 
            std::cout << "please only enter numbers (1-12) \n";
    }



    return 0;
}