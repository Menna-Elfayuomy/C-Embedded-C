#include <stdio.h>
#include <stdlib.h>

int isPrime (int n);

int main(){
	int num1, num2, prime;
	printf("Please enter two numbers in ascending order \n");
	scanf("%d%d", &num1, &num2);
	for (int i=num1; i<=num2; i++){
		prime = isPrime(i);
		if (prime == 1){
			printf("%d ", i);
		}
	}
	
	return 0;
}



int isPrime (int n){
	int primeflag = 0;
	int pre_nums;
	int flag=0;
	if (n <2){
		primeflag = 0;
	}
	else if((n == 2) || (n==3)){
		primeflag = 1;
	}
	else{
		for (int i=2; i<n; i++){
			if (n%i == 0){
				primeflag = 0;
				flag = 1;
				break;
			}
		}
		if (flag == 0){
			primeflag =1;
		}
	}
	return primeflag;
}

