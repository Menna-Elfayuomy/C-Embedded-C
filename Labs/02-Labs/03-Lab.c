#include <stdio.h>

int main(){
	int x, y;
	printf("Please enter the number: ");
	scanf("%d", &x);
	printf("Please enter the bit location: ");
	scanf("%d", &y);
	y = (1<<y);
	printf("New number is: %d", x^y);
}