#include <stdio.h>
#include "../../MyLibraries/STD_TYPES.h"
#include "SingleList.h"



int main()
{
	Node_t* Start = NULL;
	s32 var;
	
	printf("Please enter a sorted list while creating the list\n");
	Start = CreateList (Start);
	
	printf("Please enter the element you want to add to the list: ");
	scanf ("%d", &var);
	Start =  InsertInSorted (Start, var);
	DisplayList (Start);

	return 0;
}