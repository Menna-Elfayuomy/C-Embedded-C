#include <stdio.h>

int getMax(int num1, int num2);

int main(){
	int n1, n2, max;
	printf("Please enter two numbers\n");
	scanf("%d%d", &n1, &n2);
	max = getMax(n1,n2);
	printf("Max number is: %d", max);
	return 0;
}