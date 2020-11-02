#include <stdio.h>

int main(){
	char low;
	printf("Please enter a lower case letter: \n");
	scanf("%c", &low);
	printf("The Uppercase of that letter is: %c", ((char)low-32));
	
	return 0;
}