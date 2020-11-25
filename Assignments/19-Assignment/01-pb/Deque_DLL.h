#ifndef DEQUE_DLL_H_
#define DEQUE_DLL_H_
#include "../../../MyLibraries/STD_TYPES.h"

#define OK 		1
#define NOK		0

typedef struct node
{
	int Info;
	struct node* next;
	struct node* prev;
}DNode_t;


void Deque_Init(void);
u8 Deque_IsEmpty(void);
u8 InsertAtEmpty(s32 Data);
u8 InsertAtBeginning(s32 Data);
u8 InsertAtEnd(s32 Data);
u8 DeleteAtBeginning(s32* DataPtr);
u8 DeleteAtEnd(s32* DataPtr);
u8 DeleteOnlyNode(s32* DataPtr);
void DisplayDeque(void);

#endif
