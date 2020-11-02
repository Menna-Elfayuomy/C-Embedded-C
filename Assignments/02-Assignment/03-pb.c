#include <stdio.h>

int main(){
	char chr;
	printf("Please enter a character: \n");
	scanf("%c", &chr);
	if (((65 <= chr)&&(chr <= 90))||((97<= chr) &&(chr <= 122)))
	{
		printf("That character is an alphabet.");
	}
	else{
		printf("That character is not an alphabet");
	}
}