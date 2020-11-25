#include <stdio.h>
#include <stdlib.h>
#include "../../../MyLibraries/STD_TYPES.h"
#include "Deque_DLL.h"

// does the initialization got any bad effects ?!
// or should i create an initialization function ??

static DNode_t* Rear, *Front;

void Deque_Init(void)
{
	Front = NULL;
	Rear =NULL;
}

u8 Deque_IsEmpty(void)
{
	u8 ErrorState = OK;
	if (Front == NULL)
	{
	}
	else
	{
		ErrorState = NOK;
	}
	return ErrorState;
}

u8 InsertAtEmpty(s32 Data)
{
	u8 ErrorState = OK;
	DNode_t* Temp = (DNode_t*)malloc(sizeof(DNode_t));
	if (Temp == NULL)
	{
		printf("No memory to allocate your insertion\n\n");
		ErrorState = NOK;
	}
	else
	{
		Temp->Info = Data;
		Temp->prev = NULL;
		Temp->next = NULL;
		Front = Temp;
		Rear = Temp;
		printf("Insertion of 1st element in the deque is done\n\n");
	}
	return ErrorState;
}

u8 InsertAtBeginning(s32 Data)
{
	u8 ErrorState = OK;
	if (Deque_IsEmpty())
	{
		InsertAtEmpty(Data);
	}
	else
	{
		DNode_t* Temp = (DNode_t*)malloc(sizeof(DNode_t));
		if (Temp == NULL)
		{
			printf("No memory to allocate your insertion\n\n");
			ErrorState = NOK;
		}
		else
		{
			Temp->Info = Data;
			Temp->prev = NULL;
			Temp->next = Front;
			Front->prev = Temp;
			Front = Temp;
			printf("Insertion at beginning is done successfully\n\n");
		}
	}
	return ErrorState;
}

u8 InsertAtEnd(s32 Data)
{
	u8 ErrorState = OK;
	if (Deque_IsEmpty())
	{
		InsertAtEmpty(Data);
	}
	else
	{
		DNode_t* Temp = (DNode_t*)malloc(sizeof(DNode_t));
		if (Temp == NULL)
		{
			printf("No memory to allocate your insertion\n\n");
			ErrorState = NOK;
		}
		else
		{
			Temp->Info = Data;
			Temp->next = NULL;
			Temp->prev = Rear;
			Rear->next = Temp;
			Rear = Temp;
			printf("Insertion at the end is done successfully\n\n");		
		}
	}
	return ErrorState;
}

u8 DeleteOnlyNode(s32* DataPtr)
{
	u8 ErrorState = OK;
	if ((Front==Rear)&&(Front!=NULL))
	{
		*DataPtr = Front->Info;
		DNode_t* Temp = Front;
		free(Temp);
		Front = NULL;
		Rear = NULL;
		printf("Deletion of only existing element\n");
	}
	else
	{
		ErrorState = NOK;
	}
	return ErrorState;

}

u8 DeleteAtBeginning(s32* DataPtr)
{
	u8 ErrorState = OK;
	if (DataPtr == NULL)
	{
		ErrorState = NOK;
	}
	else if (Deque_IsEmpty())
	{
		printf("Deque is totally empty\n\n");
	}
	else if (DeleteOnlyNode(DataPtr))
	{
		//Do nothing
	}
	else
	{
		*DataPtr = Front->Info;
		DNode_t* Temp = Front;
		Front = Temp->next;
		Temp->next->prev = NULL;
		free(Temp);
		printf("Deletion from beginning is done successfully\n\n");
	}
	return ErrorState;
}

u8 DeleteAtEnd(s32* DataPtr)
{
	u8 ErrorState = OK;
	if (DataPtr == NULL)
	{
		ErrorState = NOK;
	}
	else if (Deque_IsEmpty())
	{
		printf("Deque is totally empty\n\n");
	}
	else if (DeleteOnlyNode(DataPtr))
	{
		//Do nothing
	}
	else
	{
		*DataPtr = Rear->Info;
		DNode_t* Temp = Rear;
		Rear = Temp->prev;
		Temp->prev->next = NULL;
		free(Temp);
		printf("Deletion from end is done successfully\n\n");
	}
	return ErrorState;
		
}

void DisplayDeque(void)
{
	//check if empty\n\n
	if (Deque_IsEmpty())
	{
		printf("Deque is totally empty\n\n");
	}
	else
	{
		printf("The Deque is: \n");
		DNode_t* ptr = Front;
		while (ptr!=NULL)
		{
			printf("%d\t", ptr->Info);
			ptr=ptr->next;
		}
		printf("\n\n");
	}
}