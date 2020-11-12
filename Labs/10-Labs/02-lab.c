#include <stdio.h>

typedef struct employees
{
	int salary;
	int bonous;
	int deductions;
}Semp_t;

Semp_t Ahmed ;
Semp_t Waleed ;
Semp_t Amr ;

int main(){
	int total;
	
	printf("Please Enter Ahmed Salary, Bouns, and Deduction: ");
	scanf("%d%d%d", &Ahmed.salary, &Ahmed.bonous, &Ahmed.deductions);
	
	printf("Please Enter Waleed Salary, Bouns, and Deduction: ");
	scanf("%d%d%d", &Waleed.salary, &Waleed.bonous, &Waleed.deductions);
	
	printf("Please Enter Amr Salary, Bouns, and Deduction: : ");
	scanf("%d%d%d", &Amr.salary, &Amr.bonous, &Amr.deductions);
	
	total = (Ahmed.salary+Ahmed.bonous-Ahmed.deductions)+(Amr.salary+Amr.bonous-Amr.deductions)+(Waleed.salary+Waleed.bonous-Waleed.deductions);
	printf("Total vlue needed is %d\n", total);
	return 0;
}