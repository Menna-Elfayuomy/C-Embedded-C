#include <stdio.h>

// global variables
int x=10;
int y=20;

// function prototype
void swap (void);

int main(){
	printf("X before swap = %d\n", x);
	printf("Y before swap = %d\n", y);

	swap();
	printf("X before swap = %d\n", x);
	printf("Y before swap = %d\n", y);
	

}

void swap (void){
	int temp;
	temp = x;
	x = y;
	y = temp;
}