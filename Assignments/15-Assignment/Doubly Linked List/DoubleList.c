#include <stdio.h>
#include <stdlib.h>
#include "DoubleList.h"
#include "../../MyLibraries/STD_TYPES.h"

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

//insert at the end
void InsertAtEnd (DNode_t* Start, s32 Data)
{
	DNode_t* ptr=Start, *Temp= (DNode_t*)malloc(sizeof(DNode_t));
	
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	
	Temp->Info = Data;
	Temp->next = NULL;
	Temp->prev = ptr;
	
	ptr->next=Temp;
}

//create list function
DNode_t* CreateList (DNode_t* Start)
{
	s32 size, i=0, val; 
	printf("Please enter the size of the list: ");
	scanf("%d", &size);
	
	if (size == 0)
	{
		return Start;
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