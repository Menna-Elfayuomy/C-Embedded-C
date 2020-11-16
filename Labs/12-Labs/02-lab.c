#include <stdio.h>
#include "D:\NTI\C_projects\Labs\07-Labs\STD_TYPES.h"

#define SIZE 50

void Read_Array (s32 arr[], s32 given_size);
void Print_Array (s32 arr[], s32 given_size);
void mergingAlgorithm(s32 arr1[], s32 arr2[], s32 merged_arr[], s32 size1, s32 size2);

int main(){
	s32 Arr1[SIZE], Arr2[SIZE], Arr[SIZE];
	s32 Arr1_Size, Arr2_Size; 
	
	printf("Please enter the 1st array size: ");
	scanf("%d", &Arr1_Size);
	printf("Enter the array elements sorted\n");
	Read_Array (Arr1, Arr1_Size);
	
	printf("Please enter the 2nd array size: ");
	scanf("%d", &Arr2_Size);
	Read_Array (Arr2, Arr2_Size);
	
	mergingAlgorithm(Arr1, Arr2, Arr, Arr1_Size, Arr2_Size);
	
	printf("The new arranged array is: \n");
	Print_Array (Arr, (Arr1_Size+Arr2_Size));
	
	return 0;
}

void mergingAlgorithm(s32 arr1[], s32 arr2[], s32 merged_arr[], s32 size1, s32 size2){
	s32 i=0, j=0 ,k=0;
	
	while((i<size1) && (j<size2)){
		if (arr1[i]<=arr2[j]){
			merged_arr[k]=arr1[i];
			i++;
		}
		else{
			merged_arr[k]=arr2[j];
			j++;
		}	
		k++;
	}
	while(i<size1){
		merged_arr[k]=arr1[i];
		i++;
		k++;
	}
	while(j<size2){
		merged_arr[k]=arr2[j];
		j++;
		k++;
	}
}
