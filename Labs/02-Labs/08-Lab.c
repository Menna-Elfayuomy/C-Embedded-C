#include <stdio.h>

int main(){
	int num1, num2, num3, max;
	printf("Please enter num1: ");
	scanf("%d", &num1);
	printf("Please enter num2: ");
	scanf("%d", &num2);
	printf("Please enter num3: ");
	scanf("%d", &num3);
	max = (num1>num2? num1:num2)>num3? (num1>num2? num1:num2):num3;
	printf("Max. num. is: %d", max);
	
	return 0;
}