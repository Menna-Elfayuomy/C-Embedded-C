#include <stdio.h>
#include <stdlib.h>
#include "../../../../MyLibraries/STD_TYPES.h"
#include "Queue_Arr.h"

#define Max		50

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
	if ((Front==-1) || (Front==Rear+1))
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
	if (Rear==Max-1)
	{
		printf ("Queue is full\n\n");
	}		
	else
		ErrorState=NOK;
	return ErrorState;
}

u32 Queue_GetSize(void)
{
	//check if empty\n
	return Rear-Front+1;
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
		if (Front == -1)
		{
			Front=0;
		}
		Rear++;
		Arr[Rear]=Data;
		printf("Insertion in is done\n\n");
	}
	return ErrorState;
}

/*
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
		Front++;
	}
	return ErrorState;
}
*/

//new delete function
u8 Queue_Delete(s32* DataPtr)
{
	u8 ErrorState = OK;
	u32 i;
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
		//shift the rest of the array to occupy the new free space
		//check that it's not the only existing element
		if (Rear > 0)
		{
			for (i=1; i<=Rear; i++)
			{
				Arr[i-1]=Arr[i];
			}	
		}
		Rear--;
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
	else
	{
		for (Counter=Front; Counter<=Rear; Counter++)
		{
			printf("%d\t", Arr[Counter]);
		}
		printf("\n\n");
	}
}
