#include <stdio.h>

int main(){
	int arr[10];
	for (int i=0; i<10; i++){
		printf("Please enter number %d: ", (i+1));
		scanf("%d", &arr[i]);
	}
	printf("The values in reversed order\n");
	for (int i=9; i>0; i--){
		printf("%d",arr[i]);
		printf("\n");
	}
	
	
	return 0;
}