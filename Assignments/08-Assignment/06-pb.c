#include <stdio.h>
#include "D:\NTI\C_projects\Labs\07-Labs\STD_TYPES.h"

#define SIZE 100

void Read_Array (s32 arr[], s32 given_size);
void swap_arrays(s32 *arr1, s32 given_size, s32 *arr2);
void Print_Array (s32 arr[], s32 given_size);

int main(){
	s32 array1[SIZE], array_size, array2[SIZE]; 
	
	printf("Please enter arrays size: ");
	scanf("%d", &array_size);

	printf("Enter Array 1\n");	
	Read_Array(array1, array_size);
	printf("Enter Array 2\n");
	Read_Array(array2, array_size);
	
	swap_arrays(array1, array_size, array2);
	printf("New arrays are\n");
	Print_Array(array1, array_size);
	printf("____________________\n");
	Print_Array(array2, array_size);
	return 0;
}

void swap_arrays(s32 *arr1, s32 given_size, s32 *arr2){
	s32 i, temp;
	for (i=0; i<given_size; i++){
		temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
}