#include <stdio.h>
#include "D:\NTI\C_projects\Labs\07-Labs\STD_TYPES.h"


typedef enum {
	L1 = 10,
	L2 = 20,
	L3 = 30
}speed_level;

int main(){
	u32 input_level;
	speed_level fan_speed;
	
	printf("Please select level of 3 levels for the fan speed (1-2-3)\n");
	scanf("%d", &input_level);
	switch(input_level){
		case 1:
		fan_speed = L1;
		printf("The fan speed is the lowest one = 10 rpm\n");
		break;
		case 2:
		fan_speed = L2;
		printf("The fan speed is the medium one = 20 rpm\n");
		break;
		case 3:
		fan_speed = L3;
		printf("The fan speed is the highest one = 30 rpm\n");
		break;
	}
	
	return 0;
}