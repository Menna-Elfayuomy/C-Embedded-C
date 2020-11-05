#include <stdio.h>

int set_bit(int num, int bit_num);
int clear_bit(int num, int bit_num);
int toggle_bit(int num, int bit_num);
int get_bit(int num, int bit_num);


int main(){
	int number, selection, result, bit_number;
	printf("Please enter a number: ");
	scanf("%d", &number);
	printf("Please select the operation you want and press: \n 1 = set bit \n 2 = clear bit \n 3 = toggle bit \n 4 = get bit \n");
	scanf("%d", &selection);
	printf("Please enter the bit number: ");
	scanf("%d", &bit_number);
	
	switch (selection){
		case 1:
		result = set_bit(number, bit_number);
		break;
		
		case 2:
		result = clear_bit(number, bit_number);
		break;
		
		case 3:
		result = toggle_bit(number, bit_number);
		break;
		
		case 4:
		result = get_bit(number, bit_number);
		break;	
	}
	
	printf("%d", result);
	
	return 0;
}


int set_bit(int num, int bit_num){
	int output;
	output = num | (1<<bit_num);
	return output;
}


int clear_bit(int num, int bit_num){
	int output;
	output = num & (~(1<<bit_num));
	return output;
}

int toggle_bit(int num, int bit_num){
	int output;
	output = num ^ (1<<bit_num);
	return output;
}

int get_bit(int num, int bit_num){
	int output;
	output = num & (1<<bit_num);
	output = (output>> bit_num);
	return output;
}
