#include <stdio.h>
#include "D:\NTI\C_projects\Labs\07-Labs\STD_TYPES.h"

void Read_Array (s32 arr[], s32 given_size){
	s32 i;
	
	for (i=0; i<given_size; i++){
		printf("Enter Element %d = ", i+1);
		scanf("%d", &arr[i]);
	}
}
