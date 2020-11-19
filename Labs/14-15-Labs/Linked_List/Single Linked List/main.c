#include <stdio.h>
#include "D:\NTI\C_projects\Labs\07-Labs\STD_TYPES.h"
#include "SingleLinkedList.h"


int main()
{
	s32 var, Pos, After, Before, pos;
	Node_t* Start=NULL;
	
	//creating list
	Start = CreateList (Start);
	
	//display the list
	DisplayList(Start);
	CountListNodes(Start);
	/*
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

	printf("\nPlease enter the value you want to add: ");
	scanf("%d", &var);
	printf("Please enter the position where you want to add the value: ");
	scanf("%d", &pos);
	Start= InsertAtPosition(Start, pos-1, var);

	DisplayList(Start);
	
	printf("\nPlease enter a value you want to delete from the list: ");
	scanf("%d", &var);
	Start= DeleteNode(Start, var);
	DisplayList(Start);

	*/
	
	Start= ReverseList (Start);
	printf("\n");
	DisplayList(Start);

	return 0;
}
