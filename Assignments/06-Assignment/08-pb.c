#include <stdio.h>
#define SIZE 30

int reverse_strg(char arr[]);

int main(){
	char ip_arr[SIZE];
	
	printf("Please enter array: ");
	scanf("%s", &ip_arr);
	
	reverse_strg(ip_arr);
	
	return 0;
}

int reverse_strg(char arr[]){
	int i=0, j=0, count=0;
	char new_arr[]="a"; 		//random initiale value
	
	while (arr[i] != 0){
		for(j=i; j>0; j--){
			new_arr[j] = new_arr[j-1];
		}
		new_arr[0]=arr[i];
		i++;
	}
	
	printf("New String is %s\n", new_arr);
	return 0;
}
