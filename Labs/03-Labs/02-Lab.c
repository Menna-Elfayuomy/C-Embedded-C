#include <stdio.h>

int main(){
	int num;
	printf("Please enter your number\n");
	scanf("%d", &num);
	if (num > 0){
		if ((num & num-1)==0){
			printf("The number is a power of 2");
		}
		else{
			printf("The number isn't a power of 2");
		}
	}
	else{
		printf("The number is invalid! please enter a positive integer greater than zero");
	}
	return 0;
}