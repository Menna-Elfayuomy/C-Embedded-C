#include <stdio.h>
#include <stdlib.h>
#include "../../../MyLibraries/STD_TYPES.h"
#include "PrioQueue_SLL.h"


int main()
{
	char Input;
	s32 InsertVal, DelVal, InsertPrio, DelPtr;
	u8 Check;
	
	PrioQueue_Init();
	while (1)
	{		
		printf(	"Press 1 to insert\n"
				"Press 2 to delete\n"
				"Press 3 to display\n"
				"Press 4 to quit\n\n");
		scanf(" %c", &Input);
		switch (Input)
		{
			case '1':
				printf("Please enter the priority: ");
				scanf("%d", &InsertPrio);
				printf("Please enter the value: ");
				scanf("%d", &InsertVal);
				PrioQueue_Insert(InsertPrio, InsertVal);
				break;
			
			case '2':
				Check = PrioQueue_Delete(&DelPtr, &DelVal);
				if (Check== OK)
				{
					printf("The deleted value is %d with priority %d\n\n", DelVal, DelPtr);			
				}	
				break;
				
			case '3': 
				PrioQueue_Display();
				break;
			
			case '4':
				break;
			default: printf("wrong option please try again\n\n"); break;
		}
		if (Input=='4')
			break;
	}
	return 0;
}