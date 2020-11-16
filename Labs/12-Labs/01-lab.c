#include <stdio.h>
#include "D:\NTI\C_projects\Labs\07-Labs\STD_TYPES.h"

#define SIZE 50

void Read_Array (s32 arr[], s32 given_size);
void insertion_sorting(s32 ip_arr[], s32 arr_size);
void Print_Array (s32 arr[], s32 given_size);

int main(){
	s32 User_Array[SIZE];
	s32 Array_Size, Gap_Size, i, j, temp; 
	
	printf("Please enter the array size: ");
	scanf("%d", &Array_Size);
	Read_Array (User_Array, Array_Size);
	
	// outer for loop to divide the list into sub-lists
	for (Gap_Size = Array_Size/2; Gap_Size>=1; Gap_Size/=2){
		// apply insertion sort
		// following loop to point to the 1st element of the un-sorted sub-list list
		for (i=Gap_Size; i< Array_Size; i++){
			temp = User_Array[i];
			//loop to point to the elements in the sorted list
			for (j=i-Gap_Size; j>=0 && User_Array[j]>temp; j-=Gap_Size){
				User_Array[j+Gap_Size] = User_Array[j];
			}
			User_Array[j+Gap_Size]=temp;
		}
	}
	
	printf("The new arranged array is: \n");
	Print_Array (User_Array, Array_Size);
	
	return 0;
}
