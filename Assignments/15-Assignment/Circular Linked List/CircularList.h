#ifndef CIRCULARLIST_H_
#define CIRCULARLIST_H_
#include "../../MyLibraries/STD_TYPES.h"

//define a struct
typedef struct cnode
{
	s32 Info;
	struct cnode* Link;
}CNode_t;

void DisplayCircularList(CNode_t* Last);
CNode_t* CreateCircularList ();
void InsertAtBeginning (CNode_t* Last, s32 Data);
CNode_t* InsertAtEnd (CNode_t* Last, s32 Data);
CNode_t* InsertAtEmpty (s32 Data);
CNode_t* InsertAfter (CNode_t* Last, s32 AfterVal ,s32 Data);
void InsertBefore (CNode_t* Last, s32 BeforeVal, s32 Data);

#endif