#include <stdio.h>

int fibonacci(int nth);

int main(){
	int element_num;
	printf("Please enter the nth element number you want in the fibonacci series: ");
	scanf("%d", &element_num);
	
	printf("For the series: 1,1,2,3,5,8, ... the 10th term = %d", fibonacci(element_num));
	return 0;
}

int fibonacci(int nth){
	int i;
	for (i=nth; i>=0; i--){
		if (i>=3){
			return (fibonacci(i-1) + fibonacci(i-2));
		}
		else if ((i==1)||(i==2)){
			return 1;
		}
	}
}
