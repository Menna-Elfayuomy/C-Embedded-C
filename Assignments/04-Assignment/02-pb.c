#include <stdio.h>
#include <stdlib.h>

int calculator(int n1, int n2, char oprt);

int main(){
	int num1, num2, result, operation;
	printf("Please enter 1st number then one of the following operations + - * / then the 2nd number: \n");
	scanf("%d %c%d", &num1, &operation, &num2);
	result = calculator(num1, num2, operation);
	printf("The result is: %d", result);
	
	return 0;
}

int calculator(int n1, int n2, char oprt){
	int output;
	switch (oprt){
		case '+':
		output = n1+n2;
		break;
		
		case '-':
		output = n1-n2;
		break;
		
		case '*':
		output = n1*n2;
		break;
		
		case '/':
		if (n2 == 0){
			printf("Division by zero! Exiting... \n");
			exit(1);
		}
		else{
			output = n1/n2;
			break;
		}
		
		default:
		printf("Error input operation. Please select one of the following operations and try again + - * / \n");
		exit(1);
	}
	return output;
}
