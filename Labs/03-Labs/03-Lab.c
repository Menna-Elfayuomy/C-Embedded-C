#include <stdio.h>

int main(){
		int num;
		printf("Please enter the number to be multiplied by 9\n");
		scanf("%d", &num);
		printf("The result is: %d", ((num<<3)+num));
		return 0;
}