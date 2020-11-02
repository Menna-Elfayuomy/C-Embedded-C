#include <stdio.h>
#include <math.h>

int main(){
	int perfect_square;
	float square;
	int num;
	printf("Please enter a positive integer number: ");
	scanf("%d", &num);
	square = sqrt(num);
	perfect_square=(int)square;
	if (perfect_square == square){
		printf("That number is a perfect square");
	}
	else{
		printf("That number isn't a perfect square");
	}
	
}