#include <stdio.h>

void reverse_array(int Arr[11]);

int main(){
	int arr [11] = {9,5,8,7,4,6,3,0,28,11,1};
	int i;
	printf("Array is \n");
	for (i=0; i<11; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");	
	reverse_array(arr);
	
	return 0;
}

void reverse_array(int Arr[11]){
	int temp; 
	int i;
	
	//take a copy from the array to be reversed
	for (i=0; i<5; i++){
		temp = Arr[i];
		Arr[i] = Arr[10-i];
		Arr[10-i] = temp;
	}

	printf("New 1st array\n");
	for(i=0; i<11; i++){
		//Arr[i]=temp_arr[10-i];
		printf("%d ", Arr[i]);
	}
}