#include <stdio.h>
#include <ctype.h>
int main(void){
	char CorD;
	printf("Type a character -- ");
	CorD = getchar();
	if(isalpha(CorD) > 0 ){
		printf("Character is typed.");
	}
	else if(isdigit(CorD) > 0){
		printf("Digit is typed.");
	}
	else{
		printf("Type input is neither character nor digit !!");
	}
	return 0;
}