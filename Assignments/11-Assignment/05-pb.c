#include <stdio.h>
#include "D:\NTI\C_projects\Labs\07-Labs\STD_TYPES.h"

#define SIZE 30

typedef union family_name{
	u8 first_name[SIZE];
	u8 last_name[SIZE];
}family_t;

int main(){
	family_t myname;
	printf("Enter your first name: ");
	scanf("%s", myname.first_name);
	printf("The last name is %s\n", myname.last_name);
	printf("size of union = %d\n", sizeof(myname));
	return 0;
}