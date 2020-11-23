#include <stdio.h>
#include <stdlib.h>
#include "../../../MyLibraries/STD_TYPES.h"
#include "CircularList.h"



int main()
{
	CNode_t* Last = NULL, *Last1 = NULL, *Last2 = NULL;
	s32 var, certainValue, selection; 
	char x;
	char *welcome = "Hey Mr/Miss :D\n"
					"I'm the Circular Linked List\n"
					"Careful you may come dizzy spinning inside me so much :"" D\n";					
					
	char *functions = 	"You can select any of the following functions to start making use of me:\n"
						"1 InsertAtEmpty:\t to insert a node in empty list\n"
						"2 InsertAtBeginning:\t to add value at the 1st location in the list\n"
						"3 InsertAtEnd:\t\t To add value at the latest location in the list\n"
						"4 CreatCircularList:\t that function creates a list by calling function #1 and #3\n"
						"5 InsertAfter:\t\t adds a value after a certain value already exists in the list\n"
						"6 InsertBefore:\t\t adds a value before a certain value already exists in the list\n"
						"7 ConcatenateLists:\t to concatenate 2 circular lists\n"
						"8 DeleteNode:\t\t to delete a value in the list\n"
						"9 DisplayCircularList:\t to print out the values of the list\n\n"
						"Please enter a number equivalent to the function you want to use or enter 0 to quit\n"; 
	
	printf("%s", welcome);
	printf("%s", functions);
	scanf("%d", &selection);
	while (selection != 0)
	{
		switch(selection)
		{
			case 1:
				printf("calling function InsertAtEmpty\n");
				printf("Please enter the 1st value in the new list: ");
				scanf("%d", &var);
				Last = InsertAtEmpty(var);
				break;
			case 2:
				printf("Calling function InsertAtBeginnning\n");
				printf("Please enter the value to be added at the 1st location: ");
				scanf("%d", &var);
				InsertAtBeginning(Last, var);
				break;
			case 3:
				printf("Calling function InsertAtEnd\n");
				printf("Please enter the value to be added at the latest location: ");
				scanf("%d", &var);
				Last = InsertAtEnd(Last, var);
				break;
			case 4:
				printf("Calling function CreateCircularList\n");
				Last = CreateCircularList();
				break;
			case 5:
				printf("Calling function InsertAfter\n");
				printf("Please enter the value to be added to the list: ");
				scanf("%d", &var);
				printf("Please enter the value in the list to add after: ");
				scanf("%d", &certainValue);
				Last = InsertAfter(Last, certainValue, var);
				break;
			case 6:
				printf("Calling function InsertBefore\n");
				printf("Please enter the value to be added to the list: ");
				scanf("%d", &var);
				printf("Please enter the value in the list to add before: ");
				scanf("%d", &certainValue);
				InsertBefore(Last, certainValue, var);
				break;
			case 7:
				printf("Calling function ConcatenateLists\n");
				printf("Creating 1st list\n");
				Last1 = CreateCircularList();
				printf("Creating 2nd list\n");
				Last2 = CreateCircularList();
				Last = ConcatenateLists (Last1, Last2);
				break;
			case 8:
				printf("Calling functin DeleteNode\n");
				printf("Please enter a value to be deleted: ");
				scanf ("%d", &var);
				Last = DeleteNode (Last, var);
				break;
			case 9:
				printf("Calling function DisplayCirculatList\n");
				DisplayCircularList(Last);
				break;
			default:
				printf("Invalid selection. Try again later");
				break;
		}		
		printf("\nWant to see the list of functions again? press y and anything else if you don't: ");
		scanf("%s", &x);
		if (x == 'y' || x=='Y')
		{
			printf("%s", functions);
		}
		printf("Your selection: ");
		scanf("%d", &selection);
	}
	printf("Nice seeing you :D. Have a nice day \nExisting...\n");		
	return 0;
}

