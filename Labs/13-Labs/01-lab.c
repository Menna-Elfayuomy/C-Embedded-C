#include <stdio.h>
#include "D:\NTI\C_projects\Labs\07-Labs\STD_TYPES.h"

#define SIZE 50

void Read_Array (s32 arr[], s32 given_size);
void Print_Array (s32 arr[], s32 given_size);
void Merge_Sorted_Parts (s32 arr[], s32 low1, s32 up1, s32 low2, s32 up2, s32 merged_parts[]);

int main(){
	s32 Lw1, Lw2, Up1, Up2, size;
	s32 Arr[SIZE], Result_Arr[SIZE];
	
	printf("Please enter the array size: ");
	scanf("%d", &size);
	
	Read_Array (Arr, size);
	printf("Please enter the low index and up undex for array 1: \n");
	scanf("%d%d", &Lw1, &Up1);
	printf("Please enter the low index and up undex for array 2: \n");
	scanf("%d%d", &Lw2, &Up2);

	Merge_Sorted_Parts(Arr, Lw1, Up1, Lw2, Up2, Result_Arr);
	Print_Array (Result_Arr, size);

	return 0;
}

void Merge_Sorted_Parts (s32 arr[], s32 low1, s32 up1, s32 low2, s32 up2, s32 merged_parts[]){
	s32 i=low1, j=low2, k=0;
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
		printf("here\n");
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