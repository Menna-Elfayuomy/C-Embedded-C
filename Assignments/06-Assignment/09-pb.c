#include <stdio.h>
#define SIZE 30

int concatenate_strg(char arr[], char arr2[]);

int main(){
	char ip_arr[SIZE], ip2_arr[SIZE];
	
	printf("Please enter 1st string: ");
	scanf("%s", &ip_arr);
	
	printf("Please enter 2nd string: ");
	scanf("%s", &ip2_arr);

	concatenate_strg(ip_arr, ip2_arr);
	
	return 0;
}

int concatenate_strg(char arr[], char arr2[]){
	int i=0, j=0;
	char out_arr[SIZE]="a";
	
	while(arr[i] != 0){
		out_arr[i]=arr[i];
		i++;
	}
	j=i;
	i=0;
	while(arr2[i] != 0){
		out_arr[j+i]=arr2[i];
		i++;
	}
	
	printf("New String is %s\n", out_arr);
	return 0;
}
