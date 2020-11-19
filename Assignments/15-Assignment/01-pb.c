#include <stdio.h>
#include <stdlib.h>
#include "DoubleList.h"
#include "../../MyLibraries/STD_TYPES.h"

void InsertAfter (DNode_t* Start, s32 AfterValue, s32 Data);


int main()
{
	DNode_t* Start=NULL;
	s32 var, existingVal;
	Start = CreateList (Start);
	DisplayList (Start);
	
	printf("Please enter the value you want to add to the list: ");
	scanf("%d", &var);
	printf("Please enter the value to add after: ");
	scanf("%d", &existingVal);
	
	InsertAfter(Start, existingVal, var);
	DisplayList (Start);

	return 0;
}


// insert after a certain value function
void InsertAfter (DNode_t* Start, s32 AfterValue, s32 Data)
{
	DNode_t* Temp = (DNode_t*)malloc(sizeof(DNode_t));
	DNode_t* ptr = Start;
	
	// check if the given list is empty
	if (Start == NULL)
	{
		printf("Warning! The given list is already empty. Try again. Good bye\n");
		return ;
	}
	// loop through the list untill you find the after value element
	while(ptr!=NULL)
	{
		if (ptr->Info == AfterValue)
		{
			break;
		}			
		ptr=ptr->next;
	}
	//check if the after value given is within the array or not
	if (ptr==NULL)
	{
		printf("The value you entered doesn't exist in the list\n");
		return;
	}
	// initialize the Temp element and add it to the list sequence
	Temp->Info = Data;
	Temp->prev=ptr;
	Temp->next=ptr->next;
	
	ptr->next=Temp;
}