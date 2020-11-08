#include <stdio.h>
#define SIZE 30

int upper_to_lower(char arr[]);

int main(){
	char ip_arr[SIZE];
	
	printf("Please enter array: ");
	scanf("%s", &ip_arr);
	
	upper_to_lower(ip_arr);
	
	return 0;
}

int upper_to_lower(char arr[]){
	int i=0, x;
	
	x = 'a' - 'A';
	while (arr[i] != 0){
		if ((arr[i]>='A') &(arr[i]<='Z')){
			arr[i] += x;
		}
		i++;
	}
	
	printf("The new array is: %s", arr);
	return 0;
}
