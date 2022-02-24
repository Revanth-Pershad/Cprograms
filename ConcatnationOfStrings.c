#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//strcat(destination, source); This concatnates destination and souce and places the result in destination

int main(void){
    char str[20] = "Revanth ";
    char str2[10] = "Pershad";
    strcat(str, str2);
    printf("Full Name - %s", str);
    return 0;
}