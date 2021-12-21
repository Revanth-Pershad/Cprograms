#include <stdio.h>
#include <float.h>
int main(void){
	float num1,num2,num3;
	printf("Enter 3 numbers - \n");
	scanf("%f %f %f", &num1 ,&num2 ,&num3);
	if(num1 > num2 && num1 > num3){
		printf("%f is greatest number." ,num1);
	}
	else if(num2 > num3){
		printf("%f is the greatest number." , num2);
	}
	else{
		printf("%f is the greatest number." , num3);
	}
	return 0;
}