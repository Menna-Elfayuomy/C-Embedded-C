#include <stdio.h>

int main(){
	int num;
	int sum=0;
	float av;
	
	// loop to print my name 10 times
	for (int i=0; i<10; i++){
		printf("Menna\n");
	}
	
	// loop to print first 10 natural numbers
	for (int x=1; x<=10; x++){
		printf("%d ", x);
	}
	
	//loop to read 10 numbers from the user to get their sum and average
	for (int y=1; y<11; y++){
		printf("\n Number %d: ", y);
		scanf("%d", &num);
		sum = sum+num;
	}
	av = (float)sum/10;
	printf("\nSum of 10 numbers is: %d\n", sum);
	printf("Average of 10 numbers is: %f\n", av);
	
	return 0;
}