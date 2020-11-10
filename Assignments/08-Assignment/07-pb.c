#include <stdio.h>
#include "D:\NTI\C_projects\Labs\07-Labs\STD_TYPES.h"

#define SIZE 50
#define New_Size 3

void new_strg(char *strg, char *newStrg);

int main(){
	char ip_strg[SIZE], op_strg[New_Size], i;
	
	printf("Please enter a string: ");
	gets(ip_strg);
	
	new_strg(ip_strg, op_strg);
	
	printf("The new string is %s\n", op_strg);
	
	return 0;
}

void new_strg(char *strg, char *newStrg){
	s32 i=0, j, x=0;
	while(strg[i] != '\0'){
		i++;
	}
	newStrg[0] = strg[i-1];
	newStrg[1] = ' ';
	newStrg[2] = strg[i-2];
	
}