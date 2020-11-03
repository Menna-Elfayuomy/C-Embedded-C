#include <stdio.h>
#include <math.h>

int main(){
	for (int i=1; i<6; i++){
		for (int x=1; x<=i; x++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}