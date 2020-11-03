#include <stdio.h>
#include <math.h>

int main(){
	int space=4, star=1;
	for (int i=0; i<5; i++){
		//for (int x=0; x<10; x++){
		//printing white spaces 
		for (int m=space; m>0; m--){
			printf(" ");
		}
		//printing stars
		for (int n=star; n>0; n--){
			printf("*");
		}
		space--;
		star+=2;
		//}
		printf("\n");
	}
	
	return 0;
}