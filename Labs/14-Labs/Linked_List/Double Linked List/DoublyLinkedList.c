#include <stdio.h>
#include "D:\NTI\C_projects\Labs\07-Labs\STD_TYPES.h"
#include <stdlib.h>
#include "DoublyLinkedList.h"

void DisplayDoubleList (DNode_t* Start)
{
	DNode_t* ptr =Start;
	if (Start == NULL)
	{
		printf("List is empty, nothing can be displayed\n");
		return;
	}
	
	printf("The list is: \n");
	while (ptr!=NULL)
	{
		printf("%d\t", ptr->Info);
		ptr = ptr->next;
	}
	printf("\n");
}
