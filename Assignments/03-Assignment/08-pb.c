#include <stdio.h>
#include <math.h>

int main(){
	// printing 1st white spaces
	for (int i=0; i<6; i++){
		for (int x=0; x<i; x++){
			printf(" ");
		}
		//printing first star
		printf("*");
		//printing second white spaces
		for (int m=(6-i); m>0; m--){
			printf("  ");
		}
		//printing second star
		printf("*");
		printf("\n");
	}
	for (int i=6; i>0; i--){
		for (int x=i; x>0; x--){
			printf(" ");
		}
		printf("*");
		for (int m=(6-i); m>0; m--){
			printf("  ");
		}
		printf("*");
		printf("\n");
	}
	
	return 0;
}