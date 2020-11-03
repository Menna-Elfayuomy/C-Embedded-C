#include <stdio.h>

int main(){
	int num;
	printf("Enter the answer of 3x4: ");
	scanf("%d", &num);
	while (num != 12){
		printf("Not correct. Please try again: ");
		scanf("%d", &num);
	}
	printf("Thanks You");
	return 0;
}