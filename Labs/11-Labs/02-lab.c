#include <stdio.h>
#include "D:\NTI\C_projects\Labs\07-Labs\STD_TYPES.h"

#define SIZE 30

void Print_Array (s32 arr[], s32 given_size);
void Read_Array (s32 arr[], s32 given_size);


int main(){
	s32 ip_arr[SIZE], sorted_arr[SIZE];
	s32 i, j, temp, arr_size;
	
	printf("Please enter the array size: ");
	scanf("%d", &arr_size);
	Read_Array(ip_arr, arr_size);
	

	//ascending order
	for (i=1; i<arr_size; i++){
		temp = ip_arr[i];	
		for (j=i-1; j>=0;j--){
			if (ip_arr[j]>temp){
				ip_arr[j+1]=ip_arr[j];
			}
			else{
				break;
			}
		}
		ip_arr[j+1]=temp;
	}
	
	printf("The new array is\n");
	Print_Array(ip_arr, arr_size);

	return 0;
}
