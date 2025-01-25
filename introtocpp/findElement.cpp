#include <iostream>

using namespace std;

int findArrEl(int array[], int size, int element);

int main(){
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int index;
    int myNum;

    cout << "enter an element to search for \n";
    cin >> myNum;

    // call funciton
    index = findArrEl(numbers, size, myNum);

    // if the element is found index will != -1
    if (index != -1){
        cout << myNum << " is at index " <<  index << "\n";
    } else{
        cout << "Your element was not found";
    }



    return 0;
}

int findArrEl(int array[], int size, int element){
    // searches for the desired element and if its there, we return it.
    for(int i = 0; i < size; i++){
        if(array[i] == element){
            return i;
        }
    }
    // if the number isnt found, we wont return anything
    return -1;
}