#include <stdio.h>
#include <stdlib.h>
#include "DoubleList.h"
#include "../../MyLibraries/STD_TYPES.h"

DNode_t* ReverseDoubleList (DNode_t* Start);

int main()
{
	DNode_t* Start=NULL;
	s32 var;
	Start = CreateList (Start);
	DisplayList (Start);

	Start= ReverseDoubleList (Start);
	printf("\n");
	DisplayList (Start);
	printf("\n");
	
	return 0;
}

DNode_t* ReverseDoubleList (DNode_t* Start)
{
	DNode_t* ptr = Start, *prevPtr, *nextPtr;
	
	//check if the list is empty
	if (Start == NULL)
	{
		printf("The given list is already empty!\n");
		return Start;
	}
	while(ptr->next!=NULL)
	{
		prevPtr = ptr->prev;
		nextPtr = ptr->next;
		ptr->next = prevPtr;
		ptr->prev = nextPtr;
		ptr = ptr->prev;
	}
	// consider the latest element in the list
	prevPtr = ptr->prev;
	nextPtr = ptr->next;
	ptr->prev = nextPtr;
	ptr->next = prevPtr;

	//update the start
	Start = ptr;

	return Start;
}