#include <stdio.h>
#define SIZE 30

int alphabet_strg(char arr[]);

int main(){
	char ip_arr[SIZE];
	
	printf("Please enter array: ");
	scanf("%s", &ip_arr);
	
	alphabet_strg(ip_arr);
	
	return 0;
}

int alphabet_strg(char arr[]){
	int i=0, j=0, count=0; 
	
	while (arr[i] != 0){
		// if the char isn't alphabet overwrite it with the successor value
		if (((arr[i]>='A')&&(arr[i]<='Z')) || ((arr[i]>='a')&&(arr[i]<='z')) ){
			i++;
		}
		else{
			j=i;
			while(arr[j]!=0){
				arr[j]=arr[j+1];
				j++;
			}
		}
	}
	
	printf("New String is %s\n", arr);
	return 0;
}
