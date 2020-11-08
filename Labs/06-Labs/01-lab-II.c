#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

int main(){
	int arr[SIZE];
	int index, i, n;
	
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	
	for (i=0; i<n; i++){
		printf("Enter element number %d ", i+1);
		scanf("%d", &arr[i]);
	}
	printf("Enter index of the element you want to delete: ");
	scanf("%d", &index);
	
	//check the index is within array range
	if ((index>5)||(index<1)){
		printf("Not a valid index. Exiting ...");
		exit(1);
	}
	//preparing the new array
	for (i=0; i<n; i++){
		for ((i== (index-1)); i<n-1; i++){
			arr[i] = arr[i+1];
		}
		printf("Element number %d = %d\n", i, arr[i]);
	}	
	
	return 0;
}