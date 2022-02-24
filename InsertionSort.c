//A insertion sort check where the given element fits in the array by checking whethere it is larger from the precvious element and smaller
// than the next element

#include <stdio.h>
#include <stdlib.h>

void scanArray(int arr[], int);
void printArray(int arr[], int);
void insertionSort(int arr[], int);

int main(void){
    
    int arr[101];
    int size;

    printf("Enter array size - ");
    scanf("%d", &size);

    scanArray(arr, size);

    printf("Given Array - ");
    printArray(arr, size);

    insertionSort(arr, size);

    printf("Sorted Array - ");
    printArray(arr, size);


    return 0;
}

void scanArray(int arr[], int size){
    printf("Enter array elements - \n");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int size){
    for(int i = 0;i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertionSort(int arr[], int size){
    int i,j,temp;
    for(int i = 1;i < size; i++){
        temp = arr[i];
        j = i -1;
        while(j >= 0 && arr[j] > temp){
            arr[j+1] = arr[j];
            --j;
        }
        arr[j+1] = temp; //because we are going backwards
    }
}