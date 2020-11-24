#include <stdio.h>
#include <stdlib.h>
#include "../../../../MyLibraries/STD_TYPES.h"
#include "Stack_Arr.h"

#define Max		50

//global variables and are set to be internal linkage with the word static
static s32 Arr[Max];
static s32 Top;

void Stack_Initialize(void)
{
	Top = -1;	
}

u8 Stack_IsEmpty(void)
{
	//check the Top value 
	if (Top == -1)
		return 1;
	else
		return 0;
}

u8 Stack_IsFull(void)
{
	if (Top == Max-1)
		return 1;
	else
		return 0;
}

u32 Stack_GetSize(void)
{
	//check if empty
	if (Top == -1)
		return 0;
	else
		return (Top+1);
}

u8 Stack_Push(s32 Data)
{
	// check if full
	if (Stack_IsFull())
	{
		printf("Stack is full, Pushing will result in overflow\n");
		return 0;
	}
	else
	{
		Top++;
		Arr[Top]=Data;
		printf("Pushing is done successfully\n\n");
		return 1;		
	}
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
		*DataPtr = Arr[Top];
		Top--;
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
		*DataPtr = Arr[Top];
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
		for (Iterator=Top; Iterator>=0; Iterator--)
		{
			printf("%d\t", Arr[Iterator]);
		}
	}		
}
