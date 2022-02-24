#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int arr[], int size);
void printArray(int arr[], int size);
void scanArray(int arr[], int size);

int main(void){
    int arr[101];
    int size;

    printf("Enter a size - ");
    scanf("%d",&size);

    scanArray(arr, size);

    printf("Given Array - ");
    printArray(arr, size);

    bubbleSort(arr, size);

    printf("Bubble Sorted Array - ");
    printArray(arr, size);

    return 0;
}

void scanArray(int arr[], int size){
    printf("Start entering array elements - \n");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubbleSort(int arr[], int size){
    int temp;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size - 1; j++){
                if(arr[j] > arr[j + 1]){
                    temp = arr[j];
                    arr[j]  =  arr[j + 1];
                    arr[j + 1] = temp;
                }
        }
    }
}