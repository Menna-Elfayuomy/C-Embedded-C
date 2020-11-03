#include <stdio.h>

int main(){
	int num, bit_num = 0, bit_value;
	printf("Please enter your number: ");
	scanf("%d", &num);
	printf("Please enter your selected bit number: ");
	scanf("%d", &bit_num);
	bit_num = (1<<bit_num);
	bit_value = num & bit_num;
	if (bit_value == 0){
		printf("The selected bit equals Zero");
	}
	else{
		printf("The selected bit equals one");
	}
	return 0;
}