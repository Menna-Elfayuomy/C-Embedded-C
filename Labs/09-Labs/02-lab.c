#include <stdio.h>
#include "D:\NTI\C_projects\Labs\07-Labs\STD_TYPES.h"

#define SIZE 50
void convertToUpper(char *strg);

int main(){
	char ip_strg[SIZE];
	s32 y=0;
	
	printf("Please enter a string of alphabets only: ");
	gets(ip_strg);
	
	convertToUpper(ip_strg);
	printf("The string is: %s", ip_strg);
	
	return 0;
}


void convertToUpper(char *strg){
	/*
	increasing the address of the pointer itself instead of using a counter
	that doesn't change the original address of the ip_strg variable as it's being called by value >> so it takes a copy of the address not the address itself
	*/
	s32 x='a'-'A';
	while(*strg != '\0'){
		if ((*strg <='z') & (*strg >= 'a')){
			*strg = *strg - x;
		}
		strg++;
	}
}
