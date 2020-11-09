#include <stdio.h>
#include <conio.h>
#define SIZE 50

typedef unsigned char u8;

int main(){

	printf("signed char = %d byte\n", sizeof(signed char));
	printf("unsigned char = %d byte\n", sizeof(unsigned char));
	printf("unsigned short int = %d byte\n", sizeof(unsigned short int));
	printf("signed short int = %d byte\n", sizeof(signed short int));
	printf("unsigned long int = %d byte\n", sizeof(unsigned long int));
	printf("signed long int = %d byte\n", sizeof(signed long int));
	
	u8 x=10;
	printf("x = %d\n", x);
	return 0;
}