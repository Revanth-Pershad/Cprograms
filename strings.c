#include <stdio.h>
#include <stdlib.h>

int main(){
    // Basic
    char name[50];
    printf("Enter your name - ");
    scanf("%s",name);
    fflush(stdin); // Use fflush(stdin) after scanf to use fgets.//flush(stdin) removes the newline \n character after scanf.
    printf("Your name is - %s \n", name);

    // Other using fgets(char, sizeof(char), stdin) function
    char lastName[40];
    printf("Enter your last name - ");
    fgets(lastName, sizeof(lastName), stdin);
    printf("Your last name is - %s", lastName);

    return 0;
}