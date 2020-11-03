#include <stdio.h>

int main(){
	int num, bit_num, bit_value;
	printf("Please enter your number and a bit number\n");
	scanf("%d%d", &num, &bit_num);
	bit_value = (num >> bit_num)&1;
	printf("The value of the bit is %d\n", bit_value);
	return 0;
}