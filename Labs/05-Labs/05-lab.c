#include <stdio.h>

int main(){
	int arr[10];
	int element;
	for (int i=0; i<10; i++){
		printf("Please enter number %d: ", i);
		scanf("%d", &arr[i]);
//		arr[i]=element;
	}
	printf("The values in reversed order\n");
	for (int i=0; i<10; i++){
		printf("%d",arr[i]);
		printf("\n");
	}
	
	
	return 0;
}