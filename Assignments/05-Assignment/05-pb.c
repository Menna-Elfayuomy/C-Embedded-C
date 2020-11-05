#include <stdio.h>

int nth_multiplication(int nth, int increment);

int main(){
	int element_num=10, incre=3;
	
	printf("For the series: 1, 3, 9, 27, ... the 10th term = %d", nth_multiplication(element_num,incre));
	return 0;
}

int nth_multiplication(int nth, int increment){
	int element=1, i;
	for (i=0; i<nth-1; i++){
		element *= 3;
	}
	return element;
}
