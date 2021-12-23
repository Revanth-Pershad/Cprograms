#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
int main(void){
	char vow[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
	char ch = 'r';
	bool isCon = true;
	printf("Type a character - ");
	scanf("%c", &ch);
	if(isalpha(ch)){
		for(int i = 0; i <= 10; ++i){
			if(ch == vow[i]){
				printf("%c is a vowel.", ch);
				isCon = false;
			}
		}
		if(isCon){
			printf("%c is a consonant.", ch);
		}
	}
	else{
		printf("%c is not a letter.", ch);
	}
	return 0;
	
}