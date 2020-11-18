#include <stdio.h>
#include "D:\NTI\C_projects\Labs\07-Labs\STD_TYPES.h"

#define SIZE 50

void Print_Array (s32 arr[], s32 given_size);
void Read_Array (s32 arr[], s32 given_size);
void Shell_Algorithm (s32 arr[], s32 given_size);
void Merge_Algorithm (s32 arr1[], s32 arr2[], s32 size1, s32 size2, s32 merged_array[]);


int main(){
	s32 s1, s2;
	s32 Arr1[SIZE], Arr2[SIZE], Result_Array[SIZE];
	
	printf("Please enter the size of 1st array: ");
	scanf("%d", &s1);
	Read_Array (Arr1, s1);
	
	printf("\nPlease enter the size of 2nd array: ");
	scanf("%d", &s2);
	Read_Array (Arr2, s2);
	
	Shell_Algorithm (Arr1, s1);
	Shell_Algorithm (Arr2, s2);

	printf("\n");
	Print_Array (Arr1, s1);
	printf("\n");
	Print_Array (Arr2, s2);
	
	Merge_Algorithm (Arr1, Arr2, s1, s2, Result_Array);
	printf("\nThe resultant array is\n");
	
	Print_Array (Result_Array, s1+s2);

	return 0;
}

void Shell_Algorithm (s32 arr[], s32 given_size){
	s32 temp, i, j, gap;
	//outer loop to divide the list into sub-lists
	for(gap=(given_size+1)/3; gap>=1; gap=(gap+1)/3){
		//loop to point to 1st element in the un-sorted array
		for (i=gap; i<given_size; i++){
			temp = arr[i];
			//comparing loop - compares unsorted element that we already pointed to the previous sorted elements
			for (j=i-gap; j>=0 && arr[j]>temp; j-=gap){
				arr[j+gap]=arr[j];
			}
			arr[j+gap]=temp;
		}
	}
}


void Merge_Algorithm (s32 arr1[], s32 arr2[], s32 size1, s32 size2, s32 merged_array[]){
	s32 i=0, j=0, k=0;
	while ((i<size1) && (j<size2)){
		if (arr1[i] <= arr2[j]){
			merged_array[k]=arr1[i];
			i++;
			k++;
		}
		else{
			merged_array[k]=arr2[j];
			j++;
			k++;
		}
	}
	while(i<size1){
		merged_array[k]=arr1[i];
		i++;
		k++;
	}
	
	while(j<size2){
		merged_array[k]=arr2[j];
		j++;
		k++;
	}
}
