#include <stdio.h>
#include "../../../MyLibraries/STD_TYPES.h"
#include "SingleList.h"



int main()
{
	Node_t* Start = NULL;
	s32 var, pos, checking_flag;
	
	Start = CreateList (Start);
	checking_flag = SortChecker(Start);
	while (checking_flag == 1)
	{
		printf("The list you entered isn't sorted :(\nEnter a sorted list and try again\n");
		Start = NULL;
		Start = CreateList (Start);
		checking_flag = SortChecker(Start);	
	}


	printf("Please enter the element you want to search for: ");
	scanf ("%d", &var);
	pos =  Search (Start, var);
	DisplayList (Start);
	printf("\nThe element position is %d", pos);

	return 0;
}