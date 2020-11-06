#include <stdio.h>

int index_func(int arr[6]);

int main(){
	int my_array[6]={1,2,3,4,4,4};
	int i;
	printf("The array is: ");
	for (i=0; i<6;i++){
		printf("%d ", my_array[i]);
	}
	printf("\nThe index of number 10 first occurence = %d", index_func(my_array));
	
	return 0;
}

int index_func(int arr[6]){
	int e_indx, flag=-1;
	for (e_indx=0; e_indx<6; e_indx++){
		if (arr[e_indx]==10){
			flag=0;
			break;
		}
	}
	if (flag == 0){
		return e_indx;
	}
	else {
		return flag;
	}
}
