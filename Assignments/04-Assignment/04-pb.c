#include <stdio.h>
#include <stdlib.h>

int countHoles (int num);

int main(){
	int num1, holes_number;
	printf("Please integer number: ");
	scanf("%d", &num1);
	holes_number = countHoles(num1);
	printf("Number of holes = %d\n", holes_number);
	
	return 0;
}


int countHoles (int num){
	int holes = 0;
	int digit;
	while (num !=0){
		digit = (num%10);
		num /=10;
		if ((digit == 0) || (digit == 4) || (digit == 6) || (digit == 9)){
			holes++;
		}
		else if (digit == 8){
			holes+=2;
		}
	}
	return holes;
}

