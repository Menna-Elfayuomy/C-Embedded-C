#include <stdio.h>
#include <conio.h>
#define SIZE 50

int main(){
	char arr[SIZE], new_arr[SIZE];
	int i=0, j=0;
	
	printf("Enter a string: ");
	gets(arr);
	
	while (arr[i]!='\0'){
		if (arr[i] != ' '){
			new_arr[j]=arr[i];
			j++;
		}
		i++;
	}
	
	printf("You entered %s: ", new_arr);
	
	return 0;
}