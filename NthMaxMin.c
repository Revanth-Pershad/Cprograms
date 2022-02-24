#include <stdio.h>
#include <stdlib.h>



int largestKth(int arr[], int size, int k){
    int temp;
    for(int i = 0; i < k; i++){
        for(int j = 0;j < size -1; j++){
            if (arr[j] < arr[j+1])
            {
                temp = arr[j];
                arr[j]  =  arr[j + 1];
                arr[j+1] = temp;
            }
            
        }

    }
    return arr[k - 1];
}

int main(void){
    int arr[101];
    int size, kth;
    printf("Enter the size of array -");
    scanf("%d", &size);
    printf("Enter the elements - \n");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter which largest number - ");
    scanf("%d", &kth);
    printf("%d largest number is - %d \n", kth, largestKth(arr, size, kth));
    return 0;
}