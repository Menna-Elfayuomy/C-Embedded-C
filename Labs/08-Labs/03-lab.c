#include <stdio.h>
#include <stdlib.h>
#include "D:\NTI\C_projects\Labs\07-Labs\STD_TYPES.h"


int main(){
	s32 x, *x_ptr;
	x_ptr = &x;
	
	printf("Please enter a value: ");
	scanf("%d", &x);
	printf("Please enter a new value: ");
	scanf("%d", &*x_ptr);
	
	printf("New value = %d\n", *x_ptr);
	
	return 0;
}

	