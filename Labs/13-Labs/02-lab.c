#include <stdio.h>
#include <stdlib.h>
#include "D:\NTI\C_projects\Labs\07-Labs\STD_TYPES.h"
#define SIZE 40

void Print_Array (s32 arr[], s32 given_size);
void Read_Array (s32 arr[], s32 given_size);
void Merge_Sorted_Parts (s32 arr[], s32 merged_parts[SIZE], s32 low1, s32 up1, s32 low2, s32 up2);
void RecursiveMergeSort (s32 Arr[], s32 low, s32 up);
void copy (s32 SrcArr[], s32 DestArr[], s32 Start,s32 end);


int main(){
	s32 size;
	s32 arrPtr[SIZE];
	
	printf("Please enter the array size: ");
	scanf("%d", &size);
	
	Read_Array (arrPtr, size);
	
	//call the recursive merge sort algorithm
	RecursiveMergeSort(arrPtr, 0, size-1);
	Print_Array (arrPtr, size);

	return 0;
}
 

void RecursiveMergeSort (s32 Arr[], s32 low, s32 up)
{
	s32 mid;
	s32 Temp[SIZE];
	s32 x = (up-low+1), i=low;
	if (low == up)
	{
		return ;
	}
	mid = (low+up)/2;
	RecursiveMergeSort (Arr, low, mid);
	RecursiveMergeSort (Arr, mid+1, up);
	Merge_Sorted_Parts (Arr, Temp, low, mid, mid+1, up);
	
	copy (Temp, Arr, low, up);
}
void copy (s32 SrcArr[], s32 DestArr[], s32 Start, s32 end)
{
	s32 i = Start;
	for (i; i<=end; i++){
		DestArr[i]= SrcArr[i];
	}
}

void Merge_Sorted_Parts (s32 arr[], s32 merged_parts[SIZE], s32 low1, s32 up1, s32 low2, s32 up2){
	s32 i=low1, j=low2, k=low1, s=up2-low1+1;
	while( (i<=up1) && (j<=up2) ){
		if (arr[i]<arr[j]){
			merged_parts[k]=arr[i];
			i++;
			k++;
		}
		else{
			merged_parts[k]= arr[j];
			j++;
			k++;
		}
	}
	
	while(i<=up1){
		merged_parts[k]=arr[i];
		i++;
		k++;
	}
	
	while(j<=up2){
		merged_parts[k]=arr[j];
		j++;
		k++;
	}	
}