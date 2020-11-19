#include <stdio.h>
#include "D:\NTI\C_projects\Labs\07-Labs\STD_TYPES.h"
#include "DoublyLinkedList.h"

int main()
{
	DNode_t* Start =NULL;
	Start = CreateDoubleList(Start);
	
	DisplayDoubleList(Start);
	
	return 0;
}