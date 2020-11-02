#include <stdio.h>

int main(){
	int grade;
	printf("Please enter number: ");
	scanf("%d", &grade);
	if ((0<=grade) && (grade<50)){
		printf("Your rating is failed");
	}
	else if ((50<=grade) && (grade<65)){
		printf("Your rating is Normal");
	}
	else if ((65<=grade) && (grade<75)){
		printf("Your rating is Good");
	}
	else if ((75<=grade) && (grade<85)){
		printf("Your rating is Very Good");
	}
	else if ((85<=grade) && (grade<=100)){
		printf("Your rating is Excellent");
	}
	else if (grade > 100){
		printf("ERROR !! Not a logical input");
	}

	return 0;
}