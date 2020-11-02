#include <stdio.h>
#include <math.h>

int main(){
	int x, y, n;
	printf("Please enter number1: ");
	scanf ("%d", &x);
	printf("Please enter the bit location: ");
	scanf ("%d", &y);
	n = (pow(2, y));
	n = ~n ;
	printf("The result after setting bit num. %d is %d", y, x&n );
}