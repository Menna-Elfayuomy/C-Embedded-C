#include <stdio.h>
#include <stdlib.h>
#include "../../MyLibraries/STD_TYPES.h"
#include "CircularList.h"

void DisplayCircularList(CNode_t* Last);

int main()
{
	CNode_t* Last = NULL;
	s32 var, certainValue;
	
	// create list
	Last = CreateCircularList (Last);
	//display list
	DisplayCircularList(Last);
	
	
	printf("Please enter the value you want to insert in the list: ");
	scanf("%d", &var);
	printf("Please enter the value after which you want to add: ");
	scanf("%d", &certainValue);
	Last = InsertAfter(Last, certainValue, var);
	DisplayCircularList(Last);
	
	
	printf("Please enter the value you want to insert in the list: ");
	scanf("%d", &var);
	printf("Please enter the value before which you want to add: ");
	scanf("%d", &certainValue);
	InsertBefore(Last, certainValue, var);
	DisplayCircularList(Last);
	
	return 0;
}

