#include <stdio.h>

int total(int arr[10], int elements_num);

int main(){
	int ip_array[10] = {5,2,4,8,6,3,25,28,1,0} , array_size = 10;
	int i;
	printf("Array elements are: ");
	for (i=0; i<10; i++){
		printf("%d ",ip_array[i]);
	}
	printf("\nTotal sum of its elements = %d\n", total(ip_array, array_size));
	
	return 0;
}

int total(int arr[10], int elements_num){
	int sum = 0, i;
	for(i=0; i<elements_num; i++){
		sum = sum + arr[i];
	}
	return sum;
}
