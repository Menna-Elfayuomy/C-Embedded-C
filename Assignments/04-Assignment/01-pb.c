#include <stdio.h>

int cubeing(int x);

int main(){
	int num, num_cube;
	printf("Please enter a number: ");
	scanf("%d", &num);
	
	num_cube = cubeing(num);
	printf("Its cube is %d\n", num_cube);
	
	return 0;
}

int cubeing(int x){
	int cube_num;
	cube_num = x*x*x;
	return cube_num;
	
}