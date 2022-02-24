#include <stdio.h>
#include <stdlib.h>

int fibo(int n){
    if(n == 0)return 1;
    if(n == 1)return 1;
    return fibo(n-1) + fibo(n -2);
}

void fiboS(int num){
    if(num == 0){
        printf("%d ",fibo(0));
        return;
    }
    fiboS(num -1);
    printf("%d ", fibo(num));
}

int main(void){
    int num;
    scanf("%d", &num); 
    fiboS(num);
    return 0;
}