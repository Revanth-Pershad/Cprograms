#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// int num = strcmp(str1, str2); 
/* strcmp compares each and every character of both the strings letter by letter -
   It returns = 
   0 if both are equal.
   >0 if the first non equal character appearing is larger in str1 than str2.
   <0 if the first non equal character appearing is larger in str2 than str1.
*/

int main(void){
    char str[20] = "abch";
    char str2[20] = "efjngo";
    char str3[20] = "zhurhg";
    int num = strcmp(str, str2);
    printf("%d", num);
    int num2 = strcmp(str2, str3);
    printf("%d", num2);
    return 0;
}