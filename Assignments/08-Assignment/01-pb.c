#include <stdio.h>
#include "D:\NTI\C_projects\Labs\07-Labs\STD_TYPES.h"

#define SIZE 100

void Read_Array (s32 arr[], s32 given_size);
void ArrSum(s32 arr[], s32 given_size, s32 *sumPtr);

int main(){
	s32 ip_array[SIZE], array_size, array_sum=0;
	
	printf("Please enter the size of you array: ");
	scanf("%d", &array_size);
	
	Read_Array(ip_array, array_size);
	ArrSum (ip_array, array_size, &array_sum);
	printf("The sum of all array elements = %d", array_sum);
	
	return 0;
}

void ArrSum(s32 arr[], s32 given_size, s32 *sumPtr){
	s32 i;
	for (i=0; i<given_size; i++){
		*sumPtr = *sumPtr + arr[i];
	} 
}
