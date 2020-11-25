#include <stdio.h>
#include <stdlib.h>
#include "../../../../MyLibraries/STD_TYPES.h"
#include "Queue_CLL.h"

typedef struct node
{
	s32 Info;
	struct node* Link;
}Node_t;

static Node_t* Rear;

void Queue_Init(void)
{
	Rear = NULL;
}

u8 Queue_IsEmpty(void)
{
	u8 ErrorState = OK;
	if (Rear==NULL)
	{
		printf("Queue is empty\n");
	}
	else
		ErrorState = NOK;
	return ErrorState;
}

u32 Queue_GetSize(void)
{
	u32 count=0;

	if (Queue_IsEmpty())
		return 0;
	else
	{
		Node_t* ptr =Rear->Link;
		do 
		{
			count++;
			ptr=ptr->Link;
			
		} while (ptr!=Rear->Link);		
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
		Temp->Info = Data;
		if (Queue_IsEmpty())
		{
			Temp->Link = Temp;
			Rear=Temp;
		}
		else
		{
			Temp->Link=Rear->Link;
			Rear->Link=Temp;
			Rear=Temp;
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
		Node_t* Temp;
		*DataPtr = Rear->Link->Info;
		// check deletion of only node
		if (Rear->Link == Rear)
		{
			Temp=Rear;
			Rear=NULL;
			free(Temp);
		}
		else
		{
			Temp=Rear->Link;
			Rear->Link=Temp->Link;
			free(Temp);
		}
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
		printf("Queue is already empty, Nothing to peek\n\n");
		ErrorState=NOK;
	}
	else
	{
		*DataPtr = Rear->Link->Info;
	}
	return ErrorState;
}

void Queue_Display(void)
{
	u32 Counter;
	Node_t* ptr = Rear->Link;
	if (Queue_IsEmpty())
	{
		//do nothing
	}
	else
	{
		do 
		{
			printf("%d\t", ptr->Info);
			ptr=ptr->Link;
			
		}while (ptr!=Rear->Link);
		printf("\n\n");
	}
}
