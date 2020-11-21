#ifndef DOUBLYLIST_H_
#define DOUBLYLIST_H_
#include "../../../MyLibraries/STD_TYPES.h"

typedef struct node
{
	int Info;
	struct node* next;
	struct node* prev;
}DNode_t;

DNode_t* InsertInEmpty (DNode_t* Start, s32 Data);
DNode_t* InsertAtBeginning (DNode_t* Start, s32 Data);
DNode_t* InsertAtEnd (DNode_t* Start, s32 Data);
DNode_t* CreateList (DNode_t* Start);
void InsertAfter (DNode_t* Start, s32 AfterVal, s32 Data);
DNode_t* InsertBefore (DNode_t* Start, s32 BeforeVal, s32 Data);
DNode_t* DeleteElement(DNode_t* Start, s32 Data);
DNode_t* ReverseDoubleList (DNode_t* Start);
void DisplayList (DNode_t* Start);

#endif