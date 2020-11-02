#include <stdio.h>

int main(){
	int temp;
	printf("Please enter temperature of water: \n");
	scanf("%d", &temp);
	if ((0<=temp) && (temp<30)){
		printf("7 mins");
	}
	else if((30<=temp) && (temp<60)){
		printf("5 mins");
	}
	else if((60<=temp) && (temp<90)){
		printf("3 mins");
	}
	else if((90<=temp) && (temp<100)){
		printf("1 mins");
	}
	else{
		printf("Invalid Input");
	}
}