#include <stdio.h>

int main(){
	int arr[10];
	int i, sum=0;
	
	for(i=0; i<10;i++)
	{
		printf("Please enter number %d: ", i+1);
		scanf("%d", &arr[i]);
		sum = sum+arr[i];
		printf("\n");
	}
	printf("Sum of array elements= %d\n", sum);
	printf("Average of array elements= %f\n", (sum/10.0));
	return 0;
}