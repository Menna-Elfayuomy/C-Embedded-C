#include <stdio.h>

int nth_element(int nth, int increment);

int main(){
	int element_num=100, incre=2;
	
	printf("For the series: 1, 3, 5, 7, 9, ... the 100th term = %d", nth_element(element_num,incre));
	return 0;
}
