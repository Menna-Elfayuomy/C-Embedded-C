#include <stdio.h>

int main(){
	int num1, num2;
	while(1){
		printf("\nPlease enter first number ");
		scanf("%d", &num1);
		printf("\nPlease enter second number ");
		scanf("%d", &num2);
		printf("The result is %d\n", num1+num2);
	}
	return 0;
}