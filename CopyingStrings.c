#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//strcpy(char destination[], char source[])- It copies the string from the source and places it at the 
//Destination string

int main(void){
    char str[20] = "Revanth ";
    char str2[20];
    strcpy(str2, str);
    printf("%s", str2);
    return 0;
}