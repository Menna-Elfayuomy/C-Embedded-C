#include <stdio.h>

int main(){
	int num, count=1;
	printf("Enter the number to display its multiplication table: ");
	scanf("%d", &num);
	while (count != num+1){
		printf("%dx%d : %d\n", num, count, num*count);
		count = count+1;
	}
	return 0;
}