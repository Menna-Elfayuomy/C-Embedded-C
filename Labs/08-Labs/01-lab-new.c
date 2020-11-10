#include <stdio.h>
#include <stdlib.h>
#include "D:\NTI\C_projects\Labs\07-Labs\STD_TYPES.h"

#define SIZE 100


int main(){
	s32 arr[SIZE];
	s32 pos, size, value, i,  temp;
	
	printf("Please enter the array size: ");
	scanf ("%d", &size);
	//reading array elements
	for (i=0; i<size; i++){
		printf("Enter element %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	//position and value of the new element 
	printf("Please enter new element position: ");
	scanf("%d", &pos);
	printf("Please enter new element value: ");
	scanf("%d", &value);
	
	//check the new element position is within the array borders
	if (pos>size){
		printf("Not a valid position. run and try again. Exiting....");
		exit(1);
	}
	//shift right
	for (i=pos; i<size+1; i++){
		arr[i-1]=arr[i];
	}
	arr[pos-1]=value;
	
	for (i=0; i<size+1; i++){
		printf("Element %d: = %d\n", i+1, arr[i]);
	}

	return 0;
}