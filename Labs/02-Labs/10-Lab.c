#include <stdio.h>

int main(){
	int num1, num2, num3, max=0, min=0;
	printf("Please enter 3 numbers: ");
	scanf("%d%d%d", &num1, &num2, &num3);
	if (num1>num2){
		if (num1>num3)
			printf("Max. num. is %d\n", num1);
		else
			printf("Max. num. is %d\n", num3);
	}
	else{
		if(num2>num3)
			printf("Max. num. is %d\n", num2);
		else
			printf("Max. num. is %d\n", num3);
	}
	
	if (num1<num2){
		if (num1<num3)
			printf("Min. num. is %d\n", num1);
		else
			printf("Min. num. is %d\n", num3);
	}
	else{
		if(num2<num3)
			printf("Min. num. is %d\n", num2);
		else
			printf("Min. num. is %d\n", num3);
	}
	return 0;
}