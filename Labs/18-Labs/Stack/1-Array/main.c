#include <stdio.h>
#include <stdlib.h>
#include "../../../../MyLibraries/STD_TYPES.h"
#include "Stack_Arr.h"


int main()
{
	char Input;
	s32 PushVal, PopVal, PeekVal, StackSize;
	u8 Check;
	
	Stack_Initialize();
	while (1)
	{		
		printf("Press 1 to push\nPress 2 to pop\nPress 3 to display\nPress 4 to peek\nPress 5 to get size\nPress 6 to quit\n\n");
		scanf(" %c", &Input);
		switch (Input)
		{
			case '1':
				printf("Please enter the value to push: ");
				scanf("%d", &PushVal);
				Stack_Push(PushVal);
				break;
			
			case '2':
				Check = Stack_Pop(&PopVal);
				if (Check== OK)
				{
					printf("The popped value is %d\n\n", PopVal);			
				}	
				break;
				
			case '3': 
				Stack_Display();
				printf("\n\n");
				break;
			
			case '4': 
				Check = Stack_Peek(&PeekVal);
				if (Check == OK)
				{
					printf("The peek is %d\n\n", PeekVal);
				}
				break;
				
			case '5': 
				StackSize=Stack_GetSize(); 
				printf("Te stack size is %d \n\n", StackSize); 
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