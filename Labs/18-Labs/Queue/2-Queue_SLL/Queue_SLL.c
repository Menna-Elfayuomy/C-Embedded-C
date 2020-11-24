#include <stdio.h>
#include <stdlib.h>
#include "../../../../MyLibraries/STD_TYPES.h"
#include "Queue_SLL.h"

typedef struct node
{
	s32 Info;
	struct node* Link;
}Node_t;

static Node_t* Rear, *Front;

void Queue_Init(void)
{
	Front = NULL;
	Rear = NULL;
}

u8 Queue_IsEmpty(void)
{
	u8 ErrorState = OK;
	if (Front==NULL)
	{
		printf("Queue is empty\n");
	}
	else
		ErrorState = NOK;
	return ErrorState;
}

u32 Queue_GetSize(void)
{
	Node_t* ptr =Front;
	u32 count=0;

	while (ptr!=NULL)
	{
		count++;
		ptr=ptr->Link;
	}
	return count;
}

u8 Queue_Insert(s32 Data)
{
	u8 ErrorState = OK;
	Node_t* Temp=(Node_t*)malloc(sizeof(Node_t));
	if (Temp == NULL)
	{
		printf("No memory to allocate your insertion\n");
		ErrorState = NOK;
	}
	else
	{
		if (Front==NULL)
		{
			//check if only node
			Temp->Info = Data;
			Temp->Link = NULL;
			Front = Temp;
			Rear = Temp;
		}
		else
		{
			Temp->Info = Data;
			Temp->Link = NULL;
			Rear->Link = Temp;
			Rear = Temp;			
		}
		printf("Insertion is done successfully\n\n");
	}
	return ErrorState;
}

u8 Queue_Delete(s32* DataPtr)
{
	u8 ErrorState = OK;
	if (DataPtr == NULL)
	{
		ErrorState = NOK;
	}
	else if (Queue_IsEmpty())
	{
		printf("Queue is already empty, deletion will result in underflow\n\n");
		ErrorState=NOK;
	}
	else
	{
		Node_t* Temp = Front;
		*DataPtr = Front->Info;
		Front= Temp->Link;
		//if the deleted element is the only node the rear needs to be null but we don't need to make a check condition and update it as we didn't use it ain any other place in the program
		free(Temp);
	}
	return ErrorState;
}

u8 Queue_Peek(s32* DataPtr)
{
	u8 ErrorState = OK;
	if (DataPtr == NULL)
	{
		ErrorState = NOK;
	}
	else if (Queue_IsEmpty())
	{
		printf("Queue is already empty\n\n");
		ErrorState=NOK;
	}
	else
	{
		*DataPtr = Front->Info;
	}
	return ErrorState;
}

void Queue_Display(void)
{
	u32 Counter;
	Node_t* ptr = Front;
	if (Queue_IsEmpty())
	{
		//do nothing
	}
	else
	{
		while (ptr!=NULL)
		{
			printf("%d\t", ptr->Info);
			ptr=ptr->Link;
		}
		printf("\n\n");
	}
}
