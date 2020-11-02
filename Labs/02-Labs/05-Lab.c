#include <stdio.h>

int main(){
	int hrs, salary;
	printf("Please enter your working hourd: ");
	scanf("%d", &hrs);
	salary = hrs*50;
	if (hrs < 40)
	{		
		salary = salary*.9;
	}
	printf("Your salary is %d", salary);
}