#ifndef SINGLELINKEDLIST_H_
#define SINGLELINKEDLIST_H_

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
Node_t* InsertAtPosition(Node_t* Start, s32 Position, s32 Data);
Node_t* DeleteNode(Node_t* Start, s32 x);
Node_t* ReverseList (Node_t* Start);


#endif