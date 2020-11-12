#include <stdio.h>

struct employees
{
	int salary;
	int bonous;
	int deductions;
};

struct employees Ahmed ;
struct employees Waleed ;
struct employees Amr ;

int main(){
	int total;
	
	printf("Please Enter Ahmed Salary: ");
	scanf("%d", &Ahmed.salary);
	printf("Please Enter Ahmed Bouns: ");
	scanf("%d", &Ahmed.bonous);
	printf("Please Enter Ahmed Deduction: ");
	scanf("%d", &Ahmed.deductions);
	
	printf("Please Enter Waleed Salary: ");
	scanf("%d", &Waleed.salary);
	printf("Please Enter Waleed Bouns: ");
	scanf("%d", &Waleed.bonous);
	printf("Please Enter Waleed Deduction: ");
	scanf("%d", &Waleed.deductions);
	
	printf("Please Enter Amr Salary: ");
	scanf("%d", &Amr.salary);
	printf("Please Enter Amr Bouns: ");
	scanf("%d", &Amr.bonous);
	printf("Please Enter Amr Deduction: ");
	scanf("%d", &Amr.deductions);
	
	total = (Ahmed.salary+Ahmed.bonous-Ahmed.deductions)+(Amr.salary+Amr.bonous-Amr.deductions)+(Waleed.salary+Waleed.bonous-Waleed.deductions);
	printf("Total vlue needed is %d\n", total);
	return 0;
}