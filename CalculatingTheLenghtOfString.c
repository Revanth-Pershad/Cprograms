#include <stdio.h>
#include <stdlib.h>
#include <string.h> //Defines various stirng fuctions

//Use strlen(char[]) to measure the lenght of the string

int main(void){
    char str[20]="Lenght";
    char str2[20]="Size";
    printf("Lenght of the first string - %d\n", strlen(str));
    printf("Lenght of the second string is - %d", strlen(str2));
    return 0;
}