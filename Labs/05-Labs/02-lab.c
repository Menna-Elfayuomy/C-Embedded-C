#include <stdio.h>

int count_ones(int num);

int main(){
	int number, result;
	printf("Please enter a number: ");
	scanf("%d", &number);
	result = count_ones(number);
	printf("Number of ones = %d", result);
	
	return 0;
}

int count_ones(int num){
	
	int counter = 0;
	while (num != 0){
		if ((num&1)==1){
			counter++;
		}
		num = (num>>1);
	}
	return counter;

}
