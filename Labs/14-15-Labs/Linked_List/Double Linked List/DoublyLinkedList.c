#include <stdio.h>
#include "D:\NTI\C_projects\Labs\07-Labs\STD_TYPES.h"
#include <stdlib.h>
#include "DoublyLinkedList.h"

void DisplayDoubleList (DNode_t* Start)
{
	DNode_t* ptr =Start;
	if (Start == NULL)
	{
		printf("List is empty, nothing can be displayed\n");
		return;
	}
	
	printf("The list is: \n");
	while (ptr!=NULL)
	{
		printf("%d\t", ptr->Info);
		ptr = ptr->next;
	}
	printf("\n");
}

DNode_t* InsertAtBeginning (DNode_t* Start, int Data)
{
	DNode_t* Temp= (DNode_t*)malloc(sizeof(DNode_t));
	
	Temp->Info=Data;
	Temp->next=Start;
	Temp->prev=NULL;
	
	Start->prev = Temp;
	Start=Temp;
	
	return Start;
}

DNode_t* InsertInEmpty (DNode_t* Start, int Data)
{
	DNode_t* Temp= (DNode_t*)malloc(sizeof(DNode_t));
	
	Temp->Info=Data;
	Temp->next=NULL;
	Temp->prev=NULL;
	
	Start=Temp;
	
	return Start;	
}

void InsertAtEnd (DNode_t* Start, int Data)
{
	DNode_t* Temp= (DNode_t*)malloc(sizeof(DNode_t));
	DNode_t* ptr = Start;
	
	Temp->Info=Data;
	Temp->next=NULL;
	while (ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	Temp->prev=ptr;
	ptr->next=Temp;
}

DNode_t* CreateDoubleList (DNode_t* Start)
{
	int n, i=0, var;
	
	printf("Enter the number of list elements: ");
	scanf("%d", &n);
	
	while (n<=0){
		printf("Invalid number for list size. Try again...");
		printf("Enter the number of list elements: ");
		scanf("%d", &n);
	}
	
	printf("Enter element number %d:	", i+1);
	scanf("%d", &var);
	Start =InsertInEmpty(Start, var);

	for(i=1; i<n; i++){
		printf("Enter element number %d:	", i+1);
		scanf("%d", &var);
		InsertAtEnd(Start, var);
	}
	return Start;	
}

void InsertAfter (DNode_t* Start, int AfterVal, int Data)
{
	DNode_t* Temp= (DNode_t*)malloc(sizeof(DNode_t));
	DNode_t* ptr = Start;

	while(ptr!=NULL)
	{
		if (ptr->Info == AfterVal)
		{
			break;
		}
		ptr=ptr->next;
	}
	
	if(ptr==NULL)
	{
		printf("Warning the Value you entered doesn't exist in the array\n");
		return;
	}
	Temp->Info=Data;
	Temp->prev=ptr;
	Temp->next=ptr->next;
	
	if (ptr->next !=NULL)
	{
		ptr->next->prev= Temp;
	}
	else
	{
		ptr->next=NULL;
	}
	ptr->next= Temp;
}
