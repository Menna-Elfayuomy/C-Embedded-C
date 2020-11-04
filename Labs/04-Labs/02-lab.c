#include <stdio.h>

int main(){
	int num;
	printf("Please enter the height of the pyramid: ");
	scanf("%d", &num);
	for (int i=1; i<=num; i++)
	{
		for (int x=(num+1)-i; x>0; x--)
		{
			printf(" ");
		}
		for (int m=0; m<(2*i)-1; m++)
		{
			printf("*");
		} 
		printf("\n");
	}
	return 0;
}