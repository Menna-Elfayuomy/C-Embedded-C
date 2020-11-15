#include <stdio.h>
#include <stdlib.h>
#include "D:\NTI\C_projects\Labs\07-Labs\STD_TYPES.h"
#define SIZE 50

void swapNumbers(s32 *num1Ptr, s32 *num2Ptr);

int main(){
	//pointer to function 
	void (*swapNumbersPtr)(s32 *, s32 *)= &swapNumbers;
	s32 num1, num2;
	
	printf("Please enter number 1 followed by number 2: \n");
	scanf("%d%d", &num1, &num2);
	swapNumbersPtr(&num1, &num2);
	printf("Numbers after swapping as following:\n Number 1 = %d \n Number 2 = %d\n", num1, num2);	
	
	return 0;
}

void swapNumbers(s32 *num1Ptr, s32 *num2Ptr){
	*num1Ptr = *num1Ptr ^ *num2Ptr;
	*num2Ptr = *num1Ptr ^ *num2Ptr;
	*num1Ptr = *num1Ptr ^ *num2Ptr;
}