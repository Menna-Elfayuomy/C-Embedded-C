#include <stdio.h>
#include "D:\NTI\C_projects\Labs\07-Labs\STD_TYPES.h"

#define SIZE 50
void printString(const char *strg);

int main(){
	char ip_strg[SIZE];
	
	printf("Please enter a string: ");
	gets(ip_strg);
	
	printString(ip_strg);
	
	return 0;
}


void printString(const char *strg){
	while(*strg != '\0'){
		printf("%c ", *strg);
		strg++;
	}
}
