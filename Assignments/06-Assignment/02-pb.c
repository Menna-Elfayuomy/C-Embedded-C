#include <stdio.h>
#define SIZE 30

int descending_bubble(int arra[], int size);

int main(){
	int ip_arr[SIZE];
	int result, n, x;
	
	printf("Please enter array size: ");
	scanf("%d", &n);
	
	for (x=0; x<n; x++){
		printf("Enter element %d in array. ", x+1);
		scanf("%d", &ip_arr[x]);
	}
	
	descending_bubble(ip_arr, n);
	
	return 0;
}

int descending_bubble(int arr[], int size){
	int i, j, max, count,x;
	
	for (i=0; i<size-1; i++){
		count=0;
		for (j=0; j<size-1-i; j++){
			if (arr[j]<arr[j+1]){
				max = arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=max;
				count++;
			}
		}
		if (count ==0){
			printf("No of used iterations = %d\n", i);
			break;
		}
	}
	for (x=0; x<size; x++){
		printf("Element %d in array = %d \n", x+1, arr[x]);
	}	
	return 0;
}
