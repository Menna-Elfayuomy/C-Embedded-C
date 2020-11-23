#ifndef SINGLELIST_H_
#define SINGLELIST_H_

typedef struct node
{
	int Info;
	struct node* Link;
}Node_t;

Node_t* InsertAtBeginning (Node_t* Start, s32 Data);
void DisplayList (Node_t* Start);
u32 CountListNodes (Node_t* Start);
s32 Search (Node_t* Start, s32 Val);
void InsertAtEnd (Node_t* Start, s32 Data);
Node_t* CreateList (Node_t* Start);
void InsertAfter(Node_t* Start, s32 AfterVal, s32 Data);
Node_t* InsertBefore(Node_t* Start, s32 BeforeVal, s32 Data);
Node_t* InsertAtPosition(Node_t* Start, s32 Position, s32 Data);
Node_t* DeleteNode(Node_t* Start, s32 x);
Node_t* ReverseList (Node_t* Start);
Node_t* InsertInSorted (Node_t* Start, s32 Data);
s32 SortChecker(Node_t* Start);
Node_t* MergingLists (Node_t* Start1, Node_t* Start2);

#endif