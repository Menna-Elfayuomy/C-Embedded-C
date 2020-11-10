#include <stdio.h>
#include "D:\NTI\C_projects\Labs\07-Labs\STD_TYPES.h"

#define SIZE 100

void Read_Array (s32 arr[], s32 given_size);
void Small_Value (s32 arr[], s32 given_size, s32 *smallPtr);

int main(){
	s32 ip_array[SIZE], array_size, smallest_value; 
	
	printf("Please enter array size: ");
	scanf("%d", &array_size);
	Read_Array(ip_array, array_size);
	
	Small_Value (ip_array, array_size, &smallest_value);
	printf("The smallest value = %d", smallest_value);
	
	return 0;
}

void Small_Value (s32 arr[], s32 given_size, s32 *smallPtr){
	s32 i;
	*smallPtr = arr[0];
	for (i=0; i<given_size; i++){
		if(*smallPtr > arr[i]){
			*smallPtr = arr[i];
		}
	}
}
