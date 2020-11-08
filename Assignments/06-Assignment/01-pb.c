#include <stdio.h>
#define SIZE 30

int distinct(char arra[]);

int main(){
	char arr[SIZE];
	int result;
	
	printf("Please enter the string: ");
	scanf("%s", &arr);
	
	result = distinct(arr);
	printf("Distinctio check. 1 means all are distinct - 0 otherwise = %d", result);
	return 0;
}

int distinct(char arra[]){
	int i=0, j=1, flag=1;
	while((arra[i]!=0)& (flag==1)){
		j=i+1;
		while (arra[j] != 0){
			if (arra[i]==arra[j]){
				flag = 0;
				break;
			} 
			j++;
		}
		i++;
	}
	return flag;
}