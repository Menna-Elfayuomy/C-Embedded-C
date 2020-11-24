#include <stdio.h>
#include <stdlib.h>
#include "../../../../MyLibraries/STD_TYPES.h"
#include "Stack_SLL.h"

typedef struct node
{
	s32 Info; 
	struct node* Link;
}Node_t;

//making that pointer with internal linkage
static Node_t* Top;

void Stack_Initialize(void)
{
	Top = NULL;	
}

u8 Stack_IsEmpty(void)
{
	//check the Top value 
	if (Top == NULL)
		return 1;
	else
		return 0;
}

u32 Stack_GetSize(void)
{
	//check if empty
	if (Top == NULL)
		return 0;
	
	//otherwise
	Node_t* ptr =Top;
	u32 count=0;

	while (ptr!=NULL)
	{
		count++;
		ptr=ptr->Link;
	}
	return count;
}

u8 Stack_Push(s32 Data)
{
	u8 ErrorState=OK;
	Node_t* Temp = (Node_t*)malloc(sizeof(Node_t));
	//if the heap is full 
	if (Temp == NULL)
	{
		printf("No heap memory to allocate your element \n\n");
		ErrorState = NOK;
	}
	else
	{
		Temp->Info = Data;
		Temp->Link = Top;
		Top = Temp;
		printf("Pushing is done successfully\n\n");		
	}
	return ErrorState;
}

u8 Stack_Pop(s32* DataPtr)
{
	u8 ErrorState = OK;
	//check the pointer
	if(DataPtr == NULL)
	{
		ErrorState = NOK;
	}
	//check if empty
	else if (Stack_IsEmpty())
	{
		printf("Stack is empty, popping operation will result in underflow\n\n");
		ErrorState = NOK;
	}
	else
	{
		Node_t* Temp = Top;
		*DataPtr = Temp->Info;
		Top = Top->Link;
		free(Temp);
		printf("Popping is done successfully\n\n");
	}		
	return ErrorState;
}

u8 Stack_Peek(s32* DataPtr)
{
	u8 ErrorState = OK;
	//check the pointer
	if(DataPtr == NULL)
	{
		ErrorState = NOK;
	}
	//check if empty
	else if (Stack_IsEmpty())
	{
		printf("Stack is empty, Nothing to peek\n\n");
		ErrorState = NOK;
	}
	else
	{
		*DataPtr = Top->Info;
	}		
	return ErrorState;
	
}

void Stack_Display(void)
{
	s32 Iterator;
	//check if empty
	if (Stack_IsEmpty())
	{
		printf("Stack is empty\n\n");
	}
	else
	{
		Node_t* ptr = Top;
		while (ptr!=NULL)
		{
			printf("%d\t", ptr->Info);
			ptr=ptr->Link;
		}
		printf("\n");
	}		
}
