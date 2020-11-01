#include <stdio.h>

int main(){
	int num1, num2;
	printf("Enter num1: ");
	scanf("%d", &num1);
	printf("Enter num2: ");
	scanf("%d", &num2);
	printf("num1 + num2 = %d \n", num1+num2);
	printf("num1 - num2 = %d \n", num1-num2);
	printf("num1 & num2 = %d \n", num1&num2);
	printf("num1 | num2 = %d \n", num1|num2);
	printf("num1 ^ num2 = %d \n", num1^num2);
}