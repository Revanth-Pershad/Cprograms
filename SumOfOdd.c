#include <stdio.h>
int main(void){
	int num[6];
	int sum = 0;
	
	printf("Enter 6 numbers - ");
	scanf("%d %d %d %d %d %d", &num[0], &num[1], &num[2], &num[3], &num[4], &num[5]);
	for(int i = 0; i <= 6 ; i++){
		if(num[i]  == 1){
			sum += num[i];
		}
		else if(num[i] % 2 == 1){
			sum += num[i];
		}
		
	}
	printf("Sum of odd numbers = %d", sum);
	return 0;
}