#include <iostream>
#include <string>

using namespace std;

void sort(int array[], int size);

int main(){
    int array[] = {10, 5, 6, 4, 8, 3, 9, 2, 7, 1};
    int size = sizeof(array) / sizeof(array[0]);

    sort(array, size);

    for(int numbers : array){
        cout << "\n" << numbers;
    }

    return 0;
}

void sort(int array[], int size){
    int temp;
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(array[j] > array[j + 1]){
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

