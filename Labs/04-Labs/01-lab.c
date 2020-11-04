#include <stdio.h>

int main(){
	int id, pass, max_trails;
	printf("Please Enter your ID: ");
	scanf("%d", &id);
	switch(id){
		
		case 1234:
		printf("Please Enter Password: ");
		for (int i=0; i<3; i++){
			scanf("%d", &pass);
			if (pass == 7788){			
				printf("Welcome Ahmed");
				break;
			}
			else if (i<2){
				printf("Try again: ");
			}
			else {
				printf("Incorrect password for 3 times, No more trails");
			}
		}
		break;
		
		case 5678:
		printf("Please Enter Password: ");
		for (int i=0; i<3; i++){
			scanf("%d", &pass);
			if (pass == 5566){			
				printf("Welcome Amr");
				break;
			}
			else if (i<2){
				printf("Try again: ");
			}
			else {
				printf("Incorrect password for 3 times, No more trails");
			}
		}
		break;
		
		case 9870:
		printf("Please Enter Password: ");
		for (int i=0; i<3; i++){
			scanf("%d", &pass);
			if (pass == 1122){			
				printf("Welcome Wael");
				break;
			}
			else if (i<2){
				printf("Try again: ");
			}
			else {
				printf("Incorrect password for 3 times, No more trails");
			}
		}
		break;
		
		default:
		printf("You are not registered");
		
	}
}