#ifndef DOUBLYLINKEDLIST_H_
#define DOUBLYLINKEDLIST_H_

typedef struct node
{
	int Info;
	struct node* next;
	struct node* prev;
}DNode_t;

void DisplayDoubleList (DNode_t* Start);

#endif