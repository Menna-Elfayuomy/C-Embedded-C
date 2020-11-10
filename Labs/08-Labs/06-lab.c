#include <stdio.h>
#include "D:\NTI\C_projects\Labs\07-Labs\STD_TYPES.h"


void swap_numbers(s32 *n1_ptr, s32 *n2_ptr);

int main(){
	s32 num1, num2;
	
	printf("Please Enter Number 1: ");
	scanf("%d", &num1);
	printf("Please Enter Number 2: ");
	scanf("%d", &num2);
	
	swap_numbers(&num1, &num2);
	
	printf("Number 1 is: %d\n", num1);
	printf("Number 2 is: %d\n", num2);

	return 0;
}

void swap_numbers(s32 *n1_ptr, s32 *n2_ptr){
	s32 temp;
	temp = *n1_ptr;
	*n1_ptr = *n2_ptr;
	*n2_ptr = temp;
}

//the difference between that program and previous program for swapping is that: swapping the values here add the changes to the original label written in the main function - but swapping the values in the previous program shows the swapping effect in the swap_function not in the main function as the changes are done in the scope of the swap_function not the main function scope