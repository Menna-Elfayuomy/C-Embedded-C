#include <stdio.h>

int getFactorial(int n);

int main(){
	int number, result;
	printf("Please enter number: ");
	scanf("%d", &number);
	result = getFactorial(number);
	printf("Factorial = %d", result);
	
	return 0;
}

int getFactorial(int n){
	if ((n==1)||(n==0)){
		return 1;
	}
	else{
		return n*getFactorial(n-1);
	}
}