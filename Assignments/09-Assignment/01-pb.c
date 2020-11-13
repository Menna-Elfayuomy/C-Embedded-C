#include <stdio.h>
#include <stdlib.h>
#include "D:\NTI\C_projects\Labs\07-Labs\STD_TYPES.h"
#define SIZE 50

int main(){
	s32 arr[SIZE];
	s32 arr_size, i;
	s32 const *arrPtr = arr;
	
	printf("Please enter the array size: ");
	scanf("%d", &arr_size);
	//taking the array elements from the user
	printf("Please enter array elements \n");
	for (i=0; i<arr_size; i++){
		scanf("%d", &arr[i]);
	}
	printf("\n");
	//printing out the array elements using the pointer to the array
	for(i=0; i<arr_size; i++){
		printf("Element %d in the array = %d\n", i, arrPtr[i]);
	}
	
	return 0;
}