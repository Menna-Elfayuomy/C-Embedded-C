#include <stdio.h>

int index_func(int arr[6]);

int main(){
	int my_array[6]={1,2,3,4,4,4};
	int i;
	printf("The array is: ");
	for (i=0; i<6;i++){
		printf("%d ", my_array[i]);
	}
	printf("\nThe index of number 4 last occurence = %d", index_func(my_array));
	
	return 0;
}

int index_func(int arr[6]){
	int e_indx, flag=7;
	for (e_indx=0; e_indx<6; e_indx++){
		if (arr[e_indx]==4){
			flag = e_indx;
		}
	}
	return flag;
}
