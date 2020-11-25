#include <stdio.h>
#include <stdlib.h>
#include "../../../MyLibraries/STD_TYPES.h"
#include "Deque_DLL.h"


int main()
{
	char Input;
	s32 InsertVal, DelVal;
	u8 Check;
	
	Deque_Init();
	while (1)
	{		
		printf(	"Press 1 to insert at beginning\n"
				"Press 2 to insert at end\n"
				"Press 3 to delete at beginning\n"
				"Press 4 to delete at end\n"
				"Press 5 to display\n"
				"Press 6 to quit\n\n");
		scanf(" %c", &Input);
		switch (Input)
		{
			case '1':
				printf("Please enter the value to insert at beginning: ");
				scanf("%d", &InsertVal);
				InsertAtBeginning(InsertVal);
				break;
			
			case '2':
				printf("Please enter the value to insert at end: ");
				scanf("%d", &InsertVal);
				InsertAtEnd(InsertVal);
				break;
			
			case '3':
				Check = DeleteAtBeginning(&DelVal);
				if (Check== OK)
				{
					printf("The deleted value from beginning is %d\n\n", DelVal);			
				}	
				break;
			
			case '4':
				Check = DeleteAtEnd(&DelVal);
				if (Check== OK)
				{
					printf("The deleted value from end is %d\n\n", DelVal);	
				}	
				break;
			
			case '5': 
				DisplayDeque();
				break;
			
			case '6':
				break;
			default: printf("wrong option please try again\n\n"); break;
		}
		if (Input=='6')
			break;
	}
	return 0;
}