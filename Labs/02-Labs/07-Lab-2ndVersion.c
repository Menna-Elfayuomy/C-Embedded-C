#include <stdio.h>

int main(){
	int grade;
	printf("Please enter number: ");
	scanf("%d", &grade);
	if (grade >=0 && grade <=100)
	{
		if (grade<50){
			printf("Failed\n");
		}
		else if(grade<65){
			printf("Normal\n");
		}
		else if (grade<75){
			printf("Good\n");
		}
		else if (grade<85){
			printf("Very Good\n");
		}
		else{
			printf("Excellent\n");
		}
	}
	else{
		printf("Invalid input number\n");
	}
	return 0;
}