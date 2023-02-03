#include <stdio.h>

#define SIZE 6

int linearSearch();

int main()
{
    int pageNumber[SIZE] = {76, 54, 1, 23, 99, 42};
    int keyNumber;

    if(linearSearch(pageNumber, SIZE, keyNumber) == 1)
        printf("Key found\n");
    else
        printf("Key not found!\n");
    
    return 0;
}

int linearSearch(int arr[], int size, int key)
{
    key = 99;

    for(int i = 0; i < size; i++){
        if(arr[i] == key)
            return 1;
    }
    return 0;
}