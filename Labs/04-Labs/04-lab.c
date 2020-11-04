#include <stdio.h>

int Max(int num1, int num2);

int main()
{
	int n1, n2, max;
	printf("Please enter a value: ");
	scanf("%d", &n1);
	printf("Please enter a value: ");
	scanf("%d", &n2);

	max = Max(n1,n2);
	printf("The maximum number is: %d", max);
	
	return 0;

}

int Max(int num1, int num2){
	int m;
	m = num1>num2? num1:num2;
	return m;
}
