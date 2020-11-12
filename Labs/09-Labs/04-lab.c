#include <stdio.h>

int main(){
	char x;
	char *namesPtr[4]={"Ahmed", "Emad", "Gamal", "Mohamed"};
	int i, j=0;
	
	printf("Please enter the first charachter of your name: ");
	scanf(" %c", &x);
	for (i=0; i<4; i++){
		if (x == *namesPtr[i]){
			printf("Welcome %s ", namesPtr[i]);
			break;
			// printf("Welcome ");
			// while (*(namesPtr[i]+j) != '\0'){
				// printf("%c", *(namesPtr[i]+j));
				// j++;
			// }
		}
	}
	return 0;
}