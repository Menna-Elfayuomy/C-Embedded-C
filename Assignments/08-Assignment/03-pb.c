#include <stdio.h>
#include "D:\NTI\C_projects\Labs\07-Labs\STD_TYPES.h"

#define SIZE 100

void Read_Array (s32 arr[], s32 given_size);
void Reverse_order(s32 *arr_ptr, s32 given_size, s32 *OutArrayPtr);
void Print_Array (s32 arr[], s32 given_size);


int main(){
	s32 ip_array[SIZE], array_size, op_array[SIZE]; 
	
	printf("Please enter array size: ");
	scanf("%d", &array_size);
	Read_Array(ip_array, array_size);
	
	Reverse_order(ip_array, array_size, op_array);
	
	Print_Array (op_array, array_size);
	
	return 0;
}

void Reverse_order(s32 *arr_ptr, s32 given_size, s32 *OutArrayPtr){
	s32 i, temp;
	for (i=0; i<given_size; i++){
		OutArrayPtr[given_size-1-i] = arr_ptr[i]; 
	}	
}