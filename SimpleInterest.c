#include <stdio.h>
#include <float.h>
int main(void){
	float rate, principal, amount, period;
	printf("Enter Principal Amount - \n");
	scanf("%f" , &principal);
	printf("Enter Time Period - \n");
	scanf("%f" , &period);
	printf("Enter Rate - \n");
	scanf("%f" , &rate);
	amount = (principal * rate * period) / 100;
	printf("Amount = %f" , amount);
	return 0;
}