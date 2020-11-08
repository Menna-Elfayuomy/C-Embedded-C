#include <stdio.h>
#define SIZE 30

int char_freq(char arr[]);

int main(){
	char ip_arr[SIZE];
	
	printf("Please enter array: ");
	scanf("%s", &ip_arr);
	
	char_freq(ip_arr);
	
	return 0;
}

int char_freq(char arr[]){
	int i=0, count=0; 
	char x;
	
	printf("Please enter the charachter you are looking for: ");
	scanf(" %c", &x);

	while (arr[i] != 0){
		if (arr[i]==x){
			count++;
		}
		i++;
	}
	
	printf("Frequncy of charachter %c = %d\n", x, count);
	return 0;
}
