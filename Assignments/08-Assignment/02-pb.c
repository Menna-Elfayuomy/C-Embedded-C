#include <stdio.h>
#include "D:\NTI\C_projects\Labs\07-Labs\STD_TYPES.h"

#define SIZE 100

void String_Length(char strg[], u32 *StrgLenPtr);

int main(){
	char ip_strg[SIZE]; 
	u32 strg_Leng = 0;
	
	printf("Please enter a string: ");
	gets(ip_strg);
	String_Length(ip_strg, &strg_Leng);
	printf("String length = %d", strg_Leng);
	
	return 0;
}

void String_Length(char strg[], u32 *StrgLenPtr){
	s32 i= 0;
	while (strg[i] != '\0'){
		i++;
		*StrgLenPtr = *StrgLenPtr +1;
	}
}