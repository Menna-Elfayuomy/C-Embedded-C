#include <stdio.h>
#include <stdlib.h>


int main(){
	int arr[5] = {5,7,2,9,1};
	int index;
	int new_arr[4];
	int i, x;
	
	printf("The array is: ");
	for (i=0; i<5; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("Pleas enter the index of the element you want to delete: ");
	scanf("%d", &index);
	
	if ((index>5)||(index<1)){
		printf("Not a valid index. Exiting ...");
		exit(1);
	}
	x=0;
	for (i=0; i<4; i++){
		if (i== (index-1)){
			x++;
		}
		new_arr[i]= arr[x];
		x++;
	}
	
	printf("\nThe array is: ");
	for (i=0; i<4; i++){
		printf("%d ", new_arr[i]);
	}
	
	
	return 0;
}