#include <stdio.h>
#include "D:\NTI\C_projects\Labs\07-Labs\STD_TYPES.h"


s32 cube_by_value(s32 x);
void cube_by_reference(s32 x, s32 *result);

int main(){
	s32 num, result1, result2;
	
	printf("Please enter a number to get its cube\n");
	scanf("%d", &num);
	
	//use return by value function
	result1 = cube_by_value(num);
	printf("Return by value result = %d\n", result1);

	//use return by refernce function
	cube_by_reference(num, &result2);
	printf("Return by refernce result = %d\n", result2);

	return 0;
}


s32 cube_by_value(s32 x){
	return x*x*x;
}

void cube_by_reference(s32 x, s32 *result){
	*result = x*x*x;
}
