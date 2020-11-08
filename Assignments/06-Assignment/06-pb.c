#include <stdio.h>
#define SIZE 30

int strg_length(char arr[]);

int main(){
	char ip_arr[SIZE];
	
	printf("Please enter array: ");
	scanf("%s", &ip_arr);
	
	strg_length(ip_arr);
	
	return 0;
}

int strg_length(char arr[]){
	int i=0, count=0; 
	
	while (arr[i] != 0){
		count++;
		i++;
	}
	
	printf("String length = %d\n", count);
	return 0;
}
