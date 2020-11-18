#include <stdio.h>
#include "D:\NTI\C_projects\Labs\07-Labs\STD_TYPES.h"

void Print_Array (s32 arr[], s32 given_size){
	s32 i;
	
	for (i=0; i<given_size; i++){
		printf("Element %d = %d\n", i+1, arr[i]);
	}
}
