#include <stdio.h>
#include "D:\NTI\C_projects\Labs\07-Labs\STD_TYPES.h"

#define SIZE 200

typedef struct {
	s32 real;
	s32 imaginary;
}number_t;

number_t addComplexNumber(number_t n1, number_t n2);


int main(){
	number_t Num1, Num2, Summation;
	printf("Please enter the first number real part then the imaginary part: \n");
	scanf("%d%d", &Num1.real, &Num1.imaginary);
	printf("Please enter the second number real part then the imaginary part: \n");
	scanf("%d%d", &Num2.real, &Num2.imaginary);
	Summation = addComplexNumber(Num1, Num2);	
	printf("Sum of the two numbers = %d + %di\n", Summation.real, Summation.imaginary);

	return 0;
}


number_t addComplexNumber(number_t n1, number_t n2){
	number_t sum;
	sum.real = n1.real + n2.real;
	sum.imaginary = n1.imaginary + n2.imaginary;
	
	return sum;
}