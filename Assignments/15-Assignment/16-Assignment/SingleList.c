#include <stdio.h>
#include "../../../MyLibraries/STD_TYPES.h"
#include <stdlib.h>
#include "SingleList.h"


void DisplayList (Node_t* Start)
{
	Node_t* ptr = Start;
	
	printf("the list is: \n");
	while(ptr!=NULL)
	{
		printf("%d\t", ptr->Info);
		ptr=ptr->Link;
	}
}

u32 CountListNodes (Node_t* Start)
{
	Node_t* ptr = Start;
	u32 counter = 0;
	while(ptr!=NULL)
	{
		counter++;
		ptr=ptr->Link;
	}
	return counter;
}

s32 Search (Node_t* Start, s32 Val)
{
	Node_t* ptr =Start;
	u32 position=0;
	
	while (ptr!=NULL)
	{
		if ((ptr->Info) == Val)
		{
			break;
		}
		ptr=ptr->Link;
		position++;
	}
	if (ptr==NULL)
	{
		printf("Value %d doesn't exist in the list", Val);
		return -1;
	}
	else
	{
		return position;
	}
}

Node_t* InsertAtBeginning (Node_t* Start, s32 Data){
	// create new node
	Node_t* Temp=(Node_t*)malloc(sizeof(Node_t));
	Temp->Info = Data;
	//insert 
	Temp->Link=Start;
	Start = Temp;
	//the start value must be returned as it's the 1st reference for the list and it has been changed
	return Start;
}

void InsertAtEnd (Node_t* Start, s32 Data)
{
	Node_t* ptr =Start;
	//create new node
	Node_t* Temp=(Node_t*)malloc(sizeof(Node_t));
	Temp->Info = Data;
	
	while(ptr->Link !=NULL)
	{
		ptr=ptr->Link;
	}
	ptr->Link=Temp;
	Temp->Link=NULL;
}

Node_t* CreateList (Node_t* Start)
{
	s32 n, i=0, var;
	
	printf("Enter the number of list elements: ");
	scanf("%d", &n);
	
	while (n<=0){
		printf("Invalid number for list size. Try again...");
		printf("Enter the number of list elements: ");
		scanf("%d", &n);
	}
	
	printf("Enter element number %d:	", i+1);
	scanf("%d", &var);
	Start =InsertAtBeginning(Start, var);

	for(i=1; i<n; i++){
		printf("Enter element number %d:	", i+1);
		scanf("%d", &var);
		InsertAtEnd(Start, var);
	}
	return Start;	
}


void InsertAfter(Node_t* Start, s32 AfterVal, s32 Data)
{
	Node_t* ptr =Start;
	
	while(ptr !=NULL)
	{
		if(ptr->Info==AfterVal)
		{
			break;
		}
		ptr=ptr->Link;
	}
	if (ptr==NULL){
		printf("Warning the Value you entered doesn't exist in the array\n");
		return;
	}
	else{
		//create new node
		/* not recommended to allocate at the beginning of the function as if we couldn't find the value after which we are going to insert the new value. 
		*/
		Node_t* Temp=(Node_t*)malloc(sizeof(Node_t));
		Temp->Info = Data;

		Temp->Link=ptr->Link;
		ptr->Link=Temp;
	}	
}

Node_t* InsertBefore(Node_t* Start, s32 BeforeVal, s32 Data)
{
	Node_t* ptr =Start;
	// check if list is empty
	if (Start==NULL){
		printf("Empty list");
		return Start;
	}
	//check if the value to insert before is the first element
	if (Start->Info == BeforeVal){
		Start = InsertAtBeginning(Start, Data);
		return Start;
	}
	else{
		while(ptr->Link !=NULL)
		{
			if((ptr->Link)->Info==BeforeVal)
			{
				break;
			}
			ptr=ptr->Link;
		}
		if (ptr->Link==NULL){
			printf("Warning the Value you entered doesn't exist in the array\n");
		}
		else{
			//create new node
			Node_t* Temp=(Node_t*)malloc(sizeof(Node_t));
			Temp->Info = Data;

			Temp->Link=ptr->Link;
			ptr->Link=Temp;
		}			
	}
	
	return Start;
}

Node_t* InsertAtPosition(Node_t* Start, s32 Position, s32 Data)
{
	Node_t* ptr =Start;
	s32 i=0;
	//check if the value to insert before is the first element
	if (Position==0){
		Start = InsertAtBeginning(Start, Data);
		return Start;
	}
	for (i=1; i<Position-1 && ptr!=NULL; i++)
	{
		ptr=ptr->Link;
	}
	if (ptr==NULL){
		printf("Invalid index\n");
	}
	else
	{
		//create new node
		Node_t* Temp=(Node_t*)malloc(sizeof(Node_t));
		Temp->Info = Data;

		Temp->Link=ptr->Link;
		ptr->Link=Temp;
	}
	return Start;	
}

Node_t* DeleteNode(Node_t* Start, s32 x)
{
	Node_t* ptr =Start, * Temp =Start;

	if (Start==NULL)
	{
		printf("List is empty. No elements to be deleted\n");
		return Start;
	}
	// deleting 1st node or the only existing node in the list
	if (ptr->Info == x)
	{
		Start=Start->Link;
		return Start;
	}
	
	//delete in between or delete the last node
	while(ptr->Link != NULL)
	{
		if ((ptr->Link)->Info == x)
		{
			break;
		}
		ptr=ptr->Link;
	}
	
	// check if you didn't find the value to be deleted in the list
	if (ptr->Link == NULL)
	{
		printf("The value you want to delete doesn't exist in the list :P\n");
	}
	else
	{
		Temp = ptr->Link;
		ptr->Link = Temp->Link;
		free (Temp);		
	}
	
	return Start;
}


Node_t* ReverseList (Node_t* Start)
{
	Node_t *ptr, *next, *prev;
	prev=NULL; 
	ptr=Start;
	
	while(ptr!=NULL)
	{
		next= ptr->Link;
		ptr->Link=prev;
		prev=ptr;
		ptr=next;
	}
	
	Start=prev;
	return Start;
}


Node_t* InsertInSorted (Node_t* Start, s32 Data)
{
	Node_t* Temp = (Node_t*)malloc(sizeof(Node_t));
	Temp->Info = Data;

	//check if the list is empty
	if (Start == NULL)
	{
		printf("warning the list is empty\n");
		Start = Temp;
		Temp->Link = NULL;
		return Start;
	}

	// check the 1st element 
	if (Start->Info > Data)
	{
		Temp->Link = Start;
		Start = Temp;
		return Start;
	}
	
	Node_t* ptr = Start;

	while (ptr->Link != NULL)
	{
		if (ptr->Link->Info > Data)
		{
			break;
		}
		ptr= ptr->Link;
	}
	
	if (ptr->Link == NULL)
	{
		Temp->Link = NULL;
		ptr->Link = Temp;
		return Start;
	}
	
	Temp->Link = ptr->Link;
	ptr->Link = Temp;
	return Start;
	
}