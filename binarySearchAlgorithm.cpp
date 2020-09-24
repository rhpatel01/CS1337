/*
* Ruchit Patel
*
* This is a binary search algorithm. The program checks to see if the middle value in an array
* matches the users input. If the middle value was not found then the high/low is updated and the 
* program continues to run until a number is found or no number is located. 
*/


#include <iostream>
using namespace std;

int binarySearch(int[], int, int);

int main(){

    const int SIZE = 5;
    int array[SIZE] = {1,3,5,7,9};
    int searchValue;
    int result;

    cout << "Enter value to be searched\n";
    cin >> searchValue;

   result = binarySearch(array,SIZE,searchValue);

    if(result != -1){
        cout << "Number was found in the array.\n";
    }else{
        cout << "Number not found\n";
    }

    return 0;
}




int binarySearch(int array[], int SIZE, int searchValue){

    int position = -1;
    int low = 0;
    int high = SIZE - 1;
    int mid;

    for(int i = 0; i < SIZE; i++){
        mid = (low + high) / 2;

        if(searchValue < array[mid]){
            high = mid - 1;
        }else if(searchValue > array[mid]){
            low = mid + 1;
        }else{
            position = mid;
        }
    }

    return position;
}