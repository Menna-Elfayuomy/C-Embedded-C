#include <stdio.h>
#include "../../MyLibraries/STD_TYPES.h"
#include "SingleList.h"



int main()
{
	u32 check;
	Node_t* Start1 = NULL, * Start2 =NULL, * Start3 = NULL;
	
	printf("Creating 1st list\n");
	Start1 = CreateList (Start1);
	check = SortChecker(Start1);
	while (check == 1)
	{
		printf("The given list isn't sorted. try again\n");
		Start1 =NULL;
		printf("Creating 1st list\n");
		Start1 = CreateList (Start1);
		check = SortChecker(Start1);		
	}
	
	printf("Creating 2nd list\n");
	Start2 = CreateList (Start2);
	check = SortChecker(Start2);
	while (check == 1)
	{
		printf("The given list isn't sorted. try again\n");
		Start2 = NULL;
		printf("Creating 2nd list\n");
		Start2 = CreateList (Start2);
		check = SortChecker(Start2);
	}
	
	Start3 = MergingLists (Start1, Start2);

	DisplayList (Start3);

	return 0;
}