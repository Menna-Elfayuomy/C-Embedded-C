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
	int old_element=1, new_element=1, temp, i;
	for (i=0; i<nth-2; i++){
		temp = new_element;
		new_element = new_element + old_element;
		old_element = temp;
	}
	return new_element;
}
