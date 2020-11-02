#include <stdio.h>

int main(){
	int num1, num2;
	char operation;
	printf("Please enter two numbers:\n");
	scanf("%d%d", &num1, &num2);
	printf("Please enter the operation you want + or - or * or /\n");
	scanf(" %c", &operation);
	switch(operation){
		case '+':
		printf("Sum result: %d", num1+num2);
		break;
		case '-':
		printf("Sub. result: %d", num1-num2);
		break;
		case '*':
		printf("Multiplication result: %d", num1*num2);
		break;
		case '/':
		printf("Division result: %f", (float)num1/num2);
		break;
	}
	return 0;
}
