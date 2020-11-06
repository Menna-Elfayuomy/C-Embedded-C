#include <stdio.h>

void swap_array(int arr1[8], int arr2[8]);

int main(){
	int arr_A [8] = {1,2,3,4,5,6,7,8};
	int arr_B [8] = {9,5,8,7,4,6,3,0};
	int i;
	printf("Array A is \n");
	for (i=0; i<8; i++){
		printf("%d ", arr_A[i]);
	}
	printf("\nArray B is \n");
	for (i=0; i<8; i++){
		printf("%d ", arr_B[i]);
	}
	printf("\n");	
	swap_array(arr_A, arr_B);
	
	return 0;
}

void swap_array(int arr1[8], int arr2[8]){
	int temp_arr[8]; 
	int i;
	for (i=0; i<8; i++){
		temp_arr[i]=arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp_arr[i];
	}
	printf("New array A\n");
	for(i=0; i<8; i++){
		printf("%d ", arr1[i]);
	}
	printf("\n");
	printf("New array B\n");
	for(i=0; i<8; i++){
		printf("%d ", arr2[i]);
	}
}