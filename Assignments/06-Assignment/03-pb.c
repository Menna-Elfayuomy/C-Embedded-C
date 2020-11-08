#include <stdio.h>
#define SIZE 30

int ascending_sorting(int arr[], int size);

int main(){
	int ip_arr[SIZE];
	int result, n, x;
	
	printf("Please enter array size: ");
	scanf("%d", &n);
	
	for (x=0; x<n; x++){
		printf("Enter element %d in array. ", x+1);
		scanf("%d", &ip_arr[x]);
	}
	
	ascending_sorting(ip_arr, n);
	
	return 0;
}

int ascending_sorting(int arr[], int size){
	int i, j, min, x, min_index;
	
	for (i=0; i<size-1; i++){
		min_index=i;
		for (j=i+1; j<size-1; j++){
			if (arr[min_index]>arr[j]){
				min_index = (j);
			}
		}
		if (i!= min_index){
			min = arr[min_index];
			arr[min_index]=arr[i];
			arr[i]=min;
		}
	}
	for (x=0; x<size; x++){
		printf("Element %d in array = %d \n", x+1, arr[x]);
	}	
	return 0;
}
