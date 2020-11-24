#include <stdio.h>
#include "../../MyLibraries/STD_TYPES.h"
#include "SingleList.h"



int main()
{
	Node_t* Start = NULL;
	
	printf("Creating 1st list\n");
	Start = CreateList (Start);
	
	Start = BubbleSorting (Start);

	DisplayList (Start);

	return 0;
}