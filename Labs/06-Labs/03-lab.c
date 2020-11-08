#include <stdio.h>
#define SIZE 30

int main(){
	int arr[SIZE], min, min_index, n, i, j;
	printf("Enter array size: ");
	scanf("%d", &n);
	
	//reading array elements
	for (i=0; i<n; i++){
		printf("Enter element number %d = ", i+1);
		scanf("%d", &arr[i]);
	}
	
	//comparing and swaping
	for (i=0; i<n-1; i++){
		min_index = i;
		// get the smallest value
		for (j=i+1; j<n; j++){
			if (arr[min_index]>arr[j]){
				min_index = j;
				printf("Min index new = %d\n", min_index);
			}
		}
		// check if swaping is needed
		if (min_index!=i){
			min = arr[min_index];
			arr[min_index]= arr[i];
			arr[i]= min;
		}
	}
	
	//printing the new sorted function
	for (i=0; i<n; i++){
		printf("element number %d = %d\n", i+1, arr[i]);
	}
	
	return 0;
}