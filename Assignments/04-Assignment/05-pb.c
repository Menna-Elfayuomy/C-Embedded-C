#include <stdio.h>
#include <stdlib.h>

int pwr (int n);

int main(){
	int num1, powr_num;
	printf("Please enter a number: ");
	scanf("%d", &num1);
	powr_num = pwr(num1);
	printf("%d", powr_num);
	return 0;
}

int pwr (int n){
	int pwr2_flag=0;
	int pwr3_flag=0;
	int flag=3;
	
	//number checking condition
	if (n<1){
		printf("Invalid number! Exiting...");
		exit(1);
	}
	
	//check if the number if power of 2 using bitwise operations
	((n&(n-1))==0)?(pwr2_flag=1):(pwr2_flag=0);
	
	//check if the number is power of 3
	if (pwr2_flag==0){
		while(n%3==0){
			n/=n;
		}
		if (n==1){
			pwr3_flag=1;
		}
	}
	
	if (pwr2_flag==1){
		flag=1;
	}
	else if(pwr3_flag==1){
		flag=0;
	}
	return flag;
}