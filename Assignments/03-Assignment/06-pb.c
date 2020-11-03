#include <stdio.h>
#include <math.h>

int main(){
	for (int i=5; i>0; i--){
		for (int x=i; x>0; x--){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}