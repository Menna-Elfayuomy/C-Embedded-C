#include <stdio.h>
#include <stdlib.h>
#include "../../MyLibraries/STD_TYPES.h"
#include "Queue_CL.h"


int main()
{
	char Input;
	s32 InsertVal, DelVal, PeekVal;
	u32 Queue_Size;
	u8 Check;
	
	Queue_Init();
	while (1)
	{		
		printf("Press 1 to insert\nPress 2 to delete\nPress 3 to display\nPress 4 to peek\nPress 5 to get size\nPress 6 to quit\n\n");
		scanf(" %c", &Input);
		switch (Input)
		{
			case '1':
				printf("Please enter the value to insert: ");
				scanf("%d", &InsertVal);
				Queue_Insert(InsertVal);
				break;
			
			case '2':
				Check = Queue_Delete(&DelVal);
				if (Check== OK)
				{
					printf("The deleted value is %d\n\n", DelVal);			
				}	
				break;
				
			case '3': 
				Queue_Display();
				break;
			
			case '4': 
				Check = Queue_Peek(&PeekVal);
				if (Check == OK)
				{
					printf("The peek is %d\n\n", PeekVal);
				}
				break;
				
			case '5': 
				Queue_Size=Queue_GetSize(); 
				printf("Te stack size is %d \n\n", Queue_Size); 
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