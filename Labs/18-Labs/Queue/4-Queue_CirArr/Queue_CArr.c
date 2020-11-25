#include <stdio.h>
#include <stdlib.h>
#include "../../../../MyLibraries/STD_TYPES.h"
#include "Queue_CArr.h"

#define Max		5
//#define Max 	10

//global variables and are set to be internal linkage with the word static
static s32 Arr[Max];
static s32 Front, Rear;

void Queue_Init(void)
{
	Front = -1;
	Rear = -1;
}

u8 Queue_IsEmpty(void)
{
	u8 ErrorState = OK;
	if (Front==-1)
	{
		printf("Queue is empty\n");
	}
	else
		ErrorState = NOK;
	return ErrorState;
}

u8 Queue_IsFull(void)
{
	u8 ErrorState = OK;
	if ((Front==0 && Rear==Max-1) || (Front==Rear+1))
	{
		printf ("Queue is full\n\n");
	}		
	else
		ErrorState=NOK;
	return ErrorState;
}

u32 Queue_GetSize(void)
{
	//check if empty
	if (Queue_IsEmpty())
	{
		return 0;
	}
	else if (Front<= Rear)
	{
		return (Rear-Front+1);
	}
	else if (Rear<Front)
	{
		return (Max-Front-Rear+1);
	}
}

u8 Queue_Insert(s32 Data)
{
	u8 ErrorState = OK;
	if (Queue_IsFull())
	{
		printf("Queue is full, inserting will result in overflow\n\n");
		ErrorState = NOK;
	}
	else 
	{
		// check if it's the 1st time insertion
		if (Queue_IsEmpty())
		{
			Front=0;
			Rear=0;
		}
		else if (Rear == Max-1)
		{
			Rear=0;
		}
		else
		{
			Rear++;
		}
		Arr[Rear]=Data;
		printf("Insertion in is done\n\n");
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
		*DataPtr = Arr[Front];
		if (Front == Rear)
		{
			Front=-1;
			Rear=-1;
		}
		else if (Front== Max-1)
		{
			Front=0;
		}
		else
		{
			Front++;
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
		*DataPtr = Arr[Front];
	}
	return ErrorState;
}

void Queue_Display(void)
{
	u32 Counter;
	if (Queue_IsEmpty())
	{
		//do nothing
	}
	else if (Front<=Rear)
	{
		for (Counter=Front; Counter<=Rear; Counter++)
		{
			printf("%d\t", Arr[Counter]);
		}
		printf("\n\n");
	}
	else if (Front>Rear)
	{
		/*
		Counter = Front;
		while (Counter!=Rear)
		{
			printf("%d\t", Arr[Counter]);
			if (Counter==Max-1)
			{
				Counter=0;
			}
			else
			{
				Counter++;
			}
		}
		printf("%d\t", Arr[Counter]);
		*/

		for (Counter=Front; Counter<Max; Counter++)
		{
			printf("%d\t", Arr[Counter]);
		}
		for (Counter=0; Counter<=Rear; Counter++)
		{
			printf("%d\t", Arr[Counter]);
		}
		printf("\n\n");		
	}
}
