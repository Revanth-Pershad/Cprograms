#include <stdio.h>
int main(){	
	int n = 0;
	printf("Order of the square matrix -  ");
	scanf("%d", &n);
	--n;
	int arr[n][n];
	for(int row = 0;row <= n; row++ ){
		for(int column = 0;column <= n;column++){
			printf("Enter a number for an element arr[%d][%d] - ", row, column);
			scanf("%d", &arr[row][column]);
		}
	}
	for(int row1 = 0;row1 <= n; row1++ ){
		for(int column1 = 0;column1 <= n;column1++){
			printf("%d ",arr[row1][column1]);
		}
		printf("\n");
	}
	return 0;
}