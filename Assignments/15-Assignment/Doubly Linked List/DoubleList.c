#include <stdio.h>
#include <stdlib.h>
#include "DoubleList.h"
#include "../../../MyLibraries/STD_TYPES.h"

//insert at the empty list
DNode_t* InsertInEmpty (DNode_t* Start, s32 Data)
{
	DNode_t* Temp = (DNode_t*)malloc(sizeof(DNode_t));
	
	Temp->Info=Data;
	Temp->next=NULL;
	Temp->prev=NULL;
	
	Start=Temp;
	
	return Start;
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

//insert at the end
DNode_t* InsertAtEnd (DNode_t* Start, s32 Data)
{
	DNode_t* ptr=Start, *Temp= (DNode_t*)malloc(sizeof(DNode_t));
	//check if the list is empty
	if(Start == NULL)
	{
		printf("Warning! the given list is empty\n");
		Start = InsertInEmpty(Start, Data);
		return Start;
	}
	
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	
	Temp->Info = Data;
	Temp->next = NULL;
	Temp->prev = ptr;
	
	ptr->next=Temp;
	return Start;
}

//create list function
DNode_t* CreateList (DNode_t* Start)
{
	s32 size, i=0, val; 
	printf("Please enter the size of the list: ");
	scanf("%d", &size);
	
	while (size <= 0)
	{
		printf("Invalid list size. Try a positive integral value\n");
		scanf("%d", &size);
	}
	printf("Please enter element %d: ", i+1);
	scanf("%d", &val);
	Start= InsertInEmpty (Start, val);
	
	for (i=1; i<size; i++)
	{
		printf("Please enter element %d: ", i+1);
		scanf("%d", &val);
		InsertAtEnd (Start, val);
	}
	return Start;
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
			Start = NULL;
			return Start;
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

//display the double linked list
void DisplayList (DNode_t* Start)
{
	if (Start == NULL)
	{
		printf("The list is empty. Nothing to print! :(\n");
		return;
	}
	DNode_t* ptr = Start;
	while(ptr!=NULL)
	{
		printf("%d\t", ptr->Info);
		ptr=ptr->next;
	}
	printf("\n");
}