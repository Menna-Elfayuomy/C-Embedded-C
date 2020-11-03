#include <stdio.h>
#include <math.h>

int main(){
	int num, powr, result=1;
	printf("Please enter the number and its power: \n");
	scanf("%d %d", &num, &powr);
	for (int i=0; i<powr; i++){
		result=result*num;
	}
	printf("%d*%d = %d", num, powr, result);
	
	return 0;
}