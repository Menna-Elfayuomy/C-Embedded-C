#include <stdio.h>
#include "D:\NTI\C_projects\Labs\07-Labs\STD_TYPES.h"
#include <stdlib.h>



typedef struct node
{
	s32 Info;
	struct node* Link;
}Node_t;


Node_t* InsertAtBeginning (Node_t* Start, s32 Data);
void InsertAtEnd (Node_t* Start, s32 Data);
Node_t* CreateList (Node_t* Start);
u32 SumListNodes (Node_t* Start);


int main()
{
	u32 sum;
	Node_t* Start=NULL;
	Start= CreateList (Start);
	sum = SumListNodes(Start);
	printf("The sum of the list elements = %d\n", sum);
	return 0;
}

//Insert at the beginning of the array
Node_t* InsertAtBeginning (Node_t* Start, s32 Data)
{
	Node_t* Temp=(Node_t*)malloc(sizeof(Node_t));
	Temp->Info = Data;
	Temp->Link = Start;
	Start=Temp;
	
	return Start;
}

//Insert at the end of the array
void InsertAtEnd (Node_t* Start, s32 Data)
{
	Node_t* ptr = Start;
	Node_t* Temp = (Node_t*)malloc (sizeof(Node_t));
	Temp->Info = Data;
	
	while(ptr->Link != NULL)
	{
		ptr = ptr->Link;
	}
	ptr->Link = Temp;
	Temp->Link=NULL;
}

//Creat list
Node_t* CreateList (Node_t* Start)
{
	s32 size, i=0, var;

	printf("Please enter the size of list: ");
	scanf("%d", &size);
	
	while(size <=0)
	{
		printf("Invalid list size. enter a positive integral value: ");
		scanf("%d", &size);
	}
	
	printf("Enter element number %d: ", i+1);
	scanf ("%d", &var);
	Start = InsertAtBeginning (Start, var);
	
	for (i=1; i<size; i++)
	{
		printf("Enter element number %d: ", i+1);
		scanf ("%d", &var);
		InsertAtEnd (Start, var);
	}
	return Start;
}

//Sum List elements
u32 SumListNodes (Node_t* Start)
{
	Node_t* ptr = Start;
	u32 Sum=0;
	while(ptr != NULL)
	{
		Sum += ptr->Info;
		ptr=ptr->Link;
	}
	return Sum;
}
