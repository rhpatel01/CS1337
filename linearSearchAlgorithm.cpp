#include <iostream>
using namespace std;

//function prototype
int linearSearch(int[], int, int); //passes array, size of array, and value to be searched

int main(){

    const int SIZE = 5;
    int array[SIZE] = {10,5,7,3,1};
    int searchValue;

        cout << "Enter a value to be searched\n";
        cin >> searchValue;

    linearSearch(array, SIZE, searchValue);
    


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