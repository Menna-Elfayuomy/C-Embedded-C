#include <stdio.h>
#include "D:\NTI\C_projects\Labs\07-Labs\STD_TYPES.h"
#include <stdlib.h>

typedef struct node
{
	int Info;
	struct node* Link;
}Node_t;

void DisplayList (Node_t* Start);
u32 CountListNodes (Node_t* Start);
s32 Search (Node_t* Start, s32 Val);
Node_t* InsertAtBeginning (Node_t* Start, s32 Data);
void InsertAtEnd (Node_t* Start, s32 Data);
Node_t* CreateList (Node_t* Start);
void InsertAfter(Node_t* Start, s32 AfterVal, s32 Data);
Node_t* InsertBefore(Node_t* Start, s32 BeforeVal, s32 Data);


int main()
{
	s32 var, Pos, After, Before;
	Node_t* Start=NULL;
	
	//creating list
	Start = CreateList (Start);
	
	//display the list
	DisplayList(Start);
	CountListNodes(Start);
	
	printf("\nenter a value to search for: ");
	scanf("%d", &var);
	Pos=Search(Start, var);
	printf("\nElement position is %d\n", Pos);
	
	printf("\nPlease enter a value you want to insert in the array then enter the value where you want to insert after\n");
	scanf("%d%d", &var, &After);
	InsertAfter(Start, After, var);

	DisplayList(Start);
	
	printf("\nPlease enter a value you want to insert in the array then enter the value where you want to insert before\n");
	scanf("%d%d", &var, &Before);
	
	Start= InsertBefore(Start, Before, var);
	DisplayList(Start);

	printf("\nPlease enter a value you want to insert in the array then enter the value where you want to insert before\n");
	scanf("%d%d", &var, &Before);
	
	Start= InsertBefore(Start, Before, var);
	DisplayList(Start);

	printf("\nPlease enter a value you want to insert in the array then enter the value where you want to insert before\n");
	scanf("%d%d", &var, &Before);
	
	Start= InsertBefore(Start, Before, var);
	DisplayList(Start);

	return 0;
}

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
