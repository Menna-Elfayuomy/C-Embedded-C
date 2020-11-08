#include <stdio.h>
#define SIZE 30

int main(){
	char my_name[SIZE];
	
	printf("Please enter your name: ");
	scanf("%s", my_name);
	
	printf("Welcome %s", my_name);
	
	return 0;
}