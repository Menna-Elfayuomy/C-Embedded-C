#include <stdio.h>
#define SIZE 30

int main(){
	int arr[SIZE], max, n, i, j, count;
	printf("Enter array size: ");
	scanf("%d", &n);
	
	//reading array elements
	for (i=0; i<n; i++){
		printf("Enter element number %d = ", i+1);
		scanf("%d", &arr[i]);
	}
	
	//comparing and swaping
	
	for (j=0; j<n-1; j++){
		count = 0;
		for (i=0; i<(n-1-j); i++){
			if (arr[i]>arr[i+1]){
				max = arr[i];
				arr[i]= arr[i+1];
				arr[i+1]=max;
				count++;
			}
		}
		// array is finally sorted no more iterations needed
		if (count ==0){
			printf("The pass number is %d \n", j);
			break;
		}
	}
	
	//printing the new sorted function
	for (i=0; i<n; i++){
		printf("element number %d = %d\n", i+1, arr[i]);
	}
	
	return 0;
}