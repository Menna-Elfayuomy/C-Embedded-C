#include <stdio.h>
#include <math.h>

int main(){
	int num, rev=0;
	printf("Please enter the number to be reversed: ");
	scanf("%d", &num);
	while(num!= 0){
		rev = rev*10+ (num%10);
		num/=10;
	}
	printf("The reversed number is: %d", rev);
	
	return 0;
}