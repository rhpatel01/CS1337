/*
Ruchit Patel

Simple linear search algorithm where each result is tested against the user input starting 
from position 0 until a value if found or until all the elements are completed. Great algorithm
to locate a find value in a given array.

*/

#include <iostream>
using namespace std;

//function prototype
int linearSearch(int[], int, int); //passes array, size of array, and value to be searched

int main(){

    const int SIZE = 5;
    int array[SIZE] = {10,5,7,3,1};
    int searchValue;
    int result;
    char choice; 


       do{
                cout << "Enter a value to be searched\n";
                cin >> searchValue;

                //function call
                result = linearSearch(array, SIZE, searchValue);
        
                    if(result == -1){
                        cout << "Value entered was not found.\n";
                    }else{
                        cout << "Value was found!\n\n";
                    }

                cout <<"Enter 'Y' or 'y' to try again\n";
                cin >> choice;

        }while(choice == 'Y' || choice == 'y');   //user can keep trying to guess the number 
        
    return 0;
}





int linearSearch(int array[], int SIZE, int searchValue){

    int position = -1;

        for(int i = 0; i < SIZE; i++)
        {
            if(searchValue == array[i])
            {
                position = i;
            }
        }

return position;
}