#include <stdio.h>
#include <stdlib.h>
#include "../../../MyLibraries/STD_TYPES.h"
#include "PrioQueue_SLL.h"

#define OK 		1
#define NOK		0

typedef struct node
{
	int Info;
	int Priority;
	struct node* Link;
}Node_t;

static Node_t* Front;

void PrioQueue_Init(void)
{
	Front = NULL;
}

u8 PrioQueue_IsEmpty(void)
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

u8 PrioQueue_Insert(s32 Prio, s32 Data)
{
	u8 ErrorState = OK;
	Node_t* Temp = (Node_t*)malloc(sizeof(Node_t));
	if (Temp==NULL)
	{
		printf("No memeory to allocate\n\n");
		ErrorState =NOK;
	}
	else
	{
		Temp->Priority = Prio;
		Temp->Info = Data;
		if (PrioQueue_IsEmpty())
		{
			Temp->Link = NULL;
			Front=Temp;
			printf("Insertion of the 1st element in the queue successfully\n\n");
		}
		else
		{
			Node_t* ptr1 = Front;
			Node_t* ptr2 = ptr1->Link;
			if (Temp->Priority < ptr1->Priority)
			{
				//insert at beginning
				Temp->Link = ptr1;
				Front = Temp;
				printf("Inserting the highest priority in the beginning successfully\n\n");
			}
			else
			{
				while (ptr2!=NULL)
				{
					if (Temp->Priority <= ptr2->Priority)
					{
						break;
					}
					ptr2=ptr2->Link;
					ptr1=ptr1->Link;
				}
				ptr1->Link=Temp;
				Temp->Link = ptr2;
				printf("Insertion is done successfully\n\n");
			}
		}
	}
	return ErrorState;
}

u8 PrioQueue_Delete(s32* PrioPtr, s32* DataPtr)
{
	u8 ErrorState = OK;
	if (DataPtr == NULL)
	{
		ErrorState = NOK;
	}
	else
	{
		//check if queue is empty
		if (PrioQueue_IsEmpty())
		{
			printf("Queue is totally empty. nothing to delete\n\n");
		}
		else 
		{
			Node_t* Temp =Front;
			//check if only 1 element exists in the queue
			if (Temp->Link == NULL)
			{
				*DataPtr=Temp->Info;
				*PrioPtr=Temp->Priority;
				Front = NULL;
				free(Temp);
				printf("Deletion of only existing element in queue is done successfully\n\n");
			}
			else
			{
				Front=Temp->Link;
				free(Temp);
				printf("Deletion is done successfully\n\n");
			}
		}
	}
	return ErrorState;
}

void PrioQueue_Display(void)
{
	// check if it's empty
	if (PrioQueue_IsEmpty())
	{
		printf("Queue is totally empty\n\n");
	}
	else
	{
		Node_t* Temp = Front;
		printf("The queue is:\n");
		printf("Task	Data\n");
		while (Temp!=NULL)
		{
			printf("%d	%d", Temp->Priority, Temp->Info);
			Temp=Temp->Link;
			printf("\n");
		}
		printf("\n");
	}
}
