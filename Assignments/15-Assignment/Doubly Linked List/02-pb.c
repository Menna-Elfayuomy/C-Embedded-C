#include <stdio.h>
#include <stdlib.h>
#include "DoubleList.h"
#include "../../MyLibraries/STD_TYPES.h"

DNode_t* InsertAtBeginning (DNode_t* Start, s32 Data);
DNode_t* InsertBefore (DNode_t* Start, s32 BeforeVal, s32 Data);

int main()
{
	DNode_t* Start=NULL;
	s32 var, existingVal;
	Start = CreateList (Start);
	DisplayList (Start);
	
	printf("Please enter the value you want to add to the list: ");
	scanf("%d", &var);
	printf("Please enter the value to add before: ");
	scanf("%d", &existingVal);
	
	Start= InsertBefore(Start, existingVal, var);
	DisplayList (Start);

	return 0;
}

//insert in the 1st element location in the array
DNode_t* InsertAtBeginning (DNode_t* Start, s32 Data)
{
	DNode_t* Temp = (DNode_t*)malloc(sizeof(DNode_t));
	
	Temp->Info = Data;
	Temp->prev = NULL;
	Temp->next = Start;
	
	Start = Temp;
	return Start;
}

// insert a value before another one exists in the list
DNode_t* InsertBefore (DNode_t* Start, s32 BeforeVal, s32 Data)
{
	DNode_t* Temp = (DNode_t*)malloc(sizeof(DNode_t)), *ptr = Start;
	// check if the passed list is empty
	if (Start==NULL)
	{
		printf("The list is empty! Try CreateList function and come back. See U :D\n");
		return Start;
	}
	// check if the insertation is gonna be at the beginning
	if (ptr->Info == BeforeVal)
	{
		printf("I'm here\n");
		Start = InsertAtBeginning(Start, Data);
		return Start;
	}
	while(ptr->next!=NULL)
	{
		if(ptr->Info == BeforeVal)
		{
			break;
		}
		ptr = ptr->next;
	}
	//check if the before value doesn't exist in the list
	if (ptr->next==NULL && ptr->Info!=BeforeVal)
	{
		printf("The before value doesn't exist in the list! Bye\n");
		return Start;
	}
	
	Temp->Info = Data;
	Temp->next=ptr;
	Temp->prev=ptr->prev;

	ptr->prev->next= Temp;	
	ptr->prev=Temp;	
	
	return Start;
}
