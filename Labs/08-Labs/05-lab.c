#include <stdio.h>
#include "D:\NTI\C_projects\Labs\07-Labs\STD_TYPES.h"


void sum_sub_values(s32 n1, s32 n2, s32 *sum_ptr, s32 *sub_ptr);

int main(){
	s32 num1, num2, sum, sub;
	
	printf("Please Enter Value 1: ");
	scanf("%d", &num1);
	printf("Please Enter Value 2: ");
	scanf("%d", &num2);
	
	sum_sub_values(num1, num2, &sum, &sub);
	
	printf("The result of Summation is: %d\n", sum);
	printf("The result of subtraction is: %d\n", sub);

	return 0;
}

void sum_sub_values(s32 n1, s32 n2, s32 *sum_ptr, s32 *sub_ptr){
	*sum_ptr = n1+n2;
	*sub_ptr = n1-n2;
}
