#include <stdio.h>
#include <stdlib.h>
#include "DoubleList.h"
#include "../../MyLibraries/STD_TYPES.h"

DNode_t* InsertAtBeginning (DNode_t* Start, s32 Data);
DNode_t* InsertBefore (DNode_t* Start, s32 BeforeVal, s32 Data);
DNode_t* DeleteElement(DNode_t* Start, s32 Data);

int main()
{
	DNode_t* Start=NULL;
	s32 var;
	Start = CreateList (Start);
	DisplayList (Start);
	
	printf("Please enter the value you want to delete from the list: ");
	scanf("%d", &var);
	
	Start= DeleteElement(Start, var);
	DisplayList (Start);

	return 0;
}

DNode_t* DeleteElement(DNode_t* Start, s32 Data)
{
	DNode_t* ptr = Start;
	// check if the given list is empty
	if (Start == NULL)
	{
		printf("The given list is empty. No deletion effort is needed! Yayyyy :D\n");
		return Start;
	}
	
	//check if the deletion is at the begnning of the array
	if (ptr->Info == Data)
	{
		//check if it was the only element in the list or not
		if(ptr->next!=NULL)
		{
			ptr->next->prev = NULL;
		}
		// if not just change the start value only
		Start = ptr->next;
		free(ptr);
		return Start;
	}
	
	//check if the deletion is in between or at the end
	while(ptr->next!= NULL)
	{
		if (ptr->Info == Data)
		{
			break;
		}
		ptr=ptr->next;
	}
	//check if the given value isn't within the list
	if(ptr->next == NULL && ptr->Info!=Data)
	{
		printf("The value you want to delete doesn't exist in the list\n");
		return Start;
	}
	ptr->prev->next = ptr->next;
	// if the deletion is in between 
	if(ptr->next!=NULL)
	{
		ptr->next->prev = ptr->prev;
	}
	free(ptr);
	return Start;
}