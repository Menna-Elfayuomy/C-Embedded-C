#include <stdio.h>

int main(){
	int num, factorial=1, x=1;
	printf("Enter an integer: ");
	scanf("%d", &num);
	/*
	if (num == 0){
		printf("Factorial= %d", 1);
	}
	else{
		do {
			factorial = factorial*num;
			num--;		
		}while(num>0);
		printf("Factorial= %d", factorial);
	}
	*/
	
	do {
		factorial = factorial*x;
		x++;		
	}while(x<=num);
	printf("Factorial= %d", factorial);

	
	return 0;
}