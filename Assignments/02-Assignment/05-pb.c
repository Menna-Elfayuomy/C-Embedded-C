#include <stdio.h>

int main(){
	int num1, num2, max;
	printf("Please enter two integers: \n");
	scanf("%d%d", &num1, &num2);

	if ((num1%num2) == 0){
		printf("First number is multiple of the second one");
	}
	else{
		printf("First number is not multiple of the second one");
	}
	
	return 0;
}