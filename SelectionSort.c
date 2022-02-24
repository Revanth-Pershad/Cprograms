//A selection sort takes the smallest element from the array and keeps adding the element to the sorted array

#include <stdio.h>
#include <stdlib.h>

void scanArray(int arr[], int);
void printArray(int arr[], int);
void selectionSort(int arr[], int);
void swap(int* a, int* b);

int main(void){
    
    int arr[101];
    int size;

    printf("Enter array size - ");
    scanf("%d", &size);

    scanArray(arr, size);

    printf("Given Array - ");
    printArray(arr, size);

    selectionSort(arr, size);

    printf("Selection Sorted Array - ");
    printArray(arr, size);


    return 0;
}

void scanArray(int arr[], int size){
    printf("Enter array elements - \n");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    return;
}

void printArray(int arr[], int size){
    for(int i = 0;i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void selectionSort(int arr[], int size){
    int min, j, i;
    for(i = 0;i < size -1; i++){
        min = i;
        for(j = i + 1;j < size;j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        swap(&arr[min], &arr[i]);
    }
}

void swap(int *n1, int *n2){
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
    return;
}