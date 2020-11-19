#ifndef DOUBLYLINKEDLIST_H_
#define DOUBLYLINKEDLIST_H_

typedef struct node
{
	int Info;
	struct node* next;
	struct node* prev;
}DNode_t;

void DisplayDoubleList (DNode_t* Start);
DNode_t* InsertAtBeginning (DNode_t* Start, int Data);
DNode_t* InsertInEmpty (DNode_t* Start, int Data);
void InsertAtEnd (DNode_t* Start, int Data);
DNode_t* CreateDoubleList (DNode_t* Start);

#endif