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
	//make the new_arr a string instead of a list of charachters by adding the latest element
	new_arr[j]='\0';
	
	printf("You entered %s: ", new_arr);
	
	return 0;
}