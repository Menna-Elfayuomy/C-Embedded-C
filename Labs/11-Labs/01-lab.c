#include <stdio.h>
#include "D:\NTI\C_projects\Labs\07-Labs\STD_TYPES.h"

//creating structure
typedef struct {
	f32 value_of_feets;
	f32 value_of_inches;	
}distances;


int main(){
	//creating objects 
	distances element1, element2, sum;

	//creat pointers to objects
	distances *ptr1 = &element1, *ptr2 = &element2, *sumPtr = &sum;
	
	printf("For element 1 please enter its value of feets then its value of inches\n");
	scanf("%f%f", &ptr1->value_of_feets, &ptr1->value_of_inches);
	
	printf("For element 2 please enter its value of feets then its value of inches\n");
	scanf("%f%f", &ptr2 -> value_of_feets, &ptr2 -> value_of_inches);
	
	sumPtr->value_of_feets = (ptr1 -> value_of_feets) + (ptr2 -> value_of_feets);
	
	sumPtr->value_of_inches = (ptr1 -> value_of_inches) + (ptr2 -> value_of_inches);
	
	while ((sumPtr->value_of_inches)>=12){
		sumPtr->value_of_inches-=12;
		sumPtr->value_of_feets++;
	}
	
	printf("Sum of feets for both elements = %f\n", sumPtr->value_of_feets);
	printf("Sum of inches for both elements = %f\n", sumPtr->value_of_inches);

	return 0;
}