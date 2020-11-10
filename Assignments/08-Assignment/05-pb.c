#include <stdio.h>
#include "D:\NTI\C_projects\Labs\07-Labs\STD_TYPES.h"

#define SIZE 100

void Read_Array (s32 arr[], s32 given_size);
void Copy_Array(s32 *arr, s32 given_size, s32 *outArray);
void Print_Array (s32 arr[], s32 given_size);

int main(){
	s32 ip_array[SIZE], array_size, op_array[SIZE]; 
	
	printf("Please enter 1st array size: ");
	scanf("%d", &array_size);
	Read_Array(ip_array, array_size);
	
	Copy_Array(ip_array, array_size, op_array);
	printf("Second array is\n");
	Print_Array (op_array, array_size);	
	
	return 0;
}

void Copy_Array(s32 *arr, s32 given_size, s32 *outArray){
	s32 i;
	for (i=0; i<given_size; i++){
		outArray[i] = arr[i];
	}
}