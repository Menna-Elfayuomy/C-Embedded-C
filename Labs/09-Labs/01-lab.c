#include <stdio.h>
#include "D:\NTI\C_projects\Labs\07-Labs\STD_TYPES.h"

#define SIZE 50
#define ROWS_NO 3

void Arrays_Sum(s32 arr1[][ROWS_NO], s32 arr2[][ROWS_NO], s32 resultArr[][ROWS_NO], s32 column_size);

int main(){
	s32 ip_array1[SIZE][ROWS_NO], ip_array2[SIZE][ROWS_NO], sum_array[SIZE][ROWS_NO];
	s32 no_of_columns, x,y;
	
	printf("Please enter the number of columns: ");
	scanf("%d", &no_of_columns);
	
	//scan 1st array elements
	printf("Taking array 1 elements\n");
	for (x=0; x<no_of_columns; x++){
		printf("Enter elements of row %d\n", x+1);
		for(y=0; y<ROWS_NO; y++){
			scanf("%d", &ip_array1[x][y]);
		}
	}
	printf("Taking array 2 elements\n");
	//scan 2nd array elements
	for (x=0; x<no_of_columns; x++){
		printf("Enter elements of row %d\n", x+1);
		for(y=0; y<ROWS_NO; y++){
			scanf("%d", &ip_array2[x][y]);
		}
	}
	
	Arrays_Sum(ip_array1, ip_array2, sum_array, no_of_columns);
	//printing the summation array
	printf("The summation array of the two previous arrays\n");
	for (x=0; x<no_of_columns; x++){
		
		for(y=0; y<ROWS_NO; y++){
			printf("%5d", sum_array[x][y]);
		}
		printf("\n");
	}

	return 0;
}

void Arrays_Sum(s32 arr1[][ROWS_NO], s32 arr2[][ROWS_NO], s32 resultArr[][ROWS_NO], s32 column_size){
	s32 i, j;
	for (i=0; i<column_size; i++){
		for(j=0; j<ROWS_NO; j++){
			resultArr[i][j] = (arr1[i][j] + arr2[i][j]);
			}
	}
}