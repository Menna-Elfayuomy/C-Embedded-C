#include <stdio.h>
#include <math.h>

int main(){
	int num, n, flag=0;
	printf("Enter integer number: ");
	scanf("%d", &num);
	if (num<=1){
		printf("Not a prime number\n");
	}
	else if ((num==2) || (num==3)){
			printf("Prime number\n");
	}
	else if (num%2==0) {
		printf("Not a prime number\n");
	}
	else{
		if (num<16){
			n = num;
		}
		else {
			n = sqrt(num);
		}
		for (int i=3; i<n; i+=2){
			if (num%i == 0){
				printf("Not prime number\n");
				flag = 1;
				break;
			}
		}
		if (flag==0){
			printf("Prime number\n");
		}
			
	}
	return 0;
}