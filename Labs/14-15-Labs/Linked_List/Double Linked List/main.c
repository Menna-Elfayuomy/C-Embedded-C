#include <stdio.h>
#include "D:\NTI\C_projects\Labs\07-Labs\STD_TYPES.h"
#include "DoublyLinkedList.h"

int main()
{
	int Val, AfterVal;
	DNode_t* Start =NULL;
	Start = CreateDoubleList(Start);
	
	DisplayDoubleList(Start);
	/*
	printf("Please enter a value to insert at the beginning of the list: ");
	scanf("%d", &Val);
	
	Start= InsertAtBeginning(Start, Val);
	DisplayDoubleList(Start);
	*/
	
	printf("Please enter a value to add: ");
	scanf("%d", &Val);
	printf("Enter the value to insert after: ");
	scanf("%d", &AfterVal);
	InsertAfter (Start, AfterVal, Val);
	DisplayDoubleList(Start);
	
	return 0;
}