#include <stdio.h>
#include <stdlib.h>
#include "../../../MyLibraries/STD_TYPES.h"
#include "CircularList.h"



CNode_t* InsertAtEmpty (s32 Data)
{
	// for the empty list the 1st element is the same as the latest element
	CNode_t* Last = (CNode_t*)malloc(sizeof(CNode_t));
	Last->Info = Data;
	//point to itself
	Last->Link = Last;
	return Last;
}


void InsertAtBeginning (CNode_t* Last, s32 Data)
{
	// check if the given list is empty
	if (Last ==NULL)
	{
		printf("Warning!! the given list is totaly empty :| use function InsertInEmpty instead \n");
		return ;
	}
	
	CNode_t* ptr = Last->Link;
	// initialize a temp pointer to be the new first element in the list
	CNode_t* Temp = (CNode_t*)malloc(sizeof(CNode_t));
	Temp->Info = Data;
	Temp->Link = ptr;
	
	Last->Link = Temp;
}


// add element at the end of a cicular list
CNode_t* InsertAtEnd (CNode_t* Last, s32 Data)
{
		// check if the given list is empty
	if (Last ==NULL)
	{
		printf("Warning!! the given list is totaly empty :| use function InsertInEmpty instead \n");
		return Last;
	}

	//otherwise
	CNode_t* ptr = Last;
	CNode_t* Temp = (CNode_t*)malloc(sizeof(CNode_t));
	Temp->Info = Data;
	Temp->Link = ptr->Link;
	ptr->Link = Temp;
	
	Last = Temp;
	return Last;
}


//creating a cicular list
CNode_t* CreateCircularList ()
{
	CNode_t* Last = NULL;
	s32 size, var, i=0;
	printf("Please enter the size of the circular list you want to creat: ");
	scanf("%d", &size);
	//check for reliable size value
	while(size <= 0)
	{
		printf("Wrong list size! please try any positive integral value\n");
		scanf("%d", &size);
	}		
	
	printf("Please enter element %d: ", i+1);
	scanf("%d", &var);
	Last = InsertAtEmpty(var);
	
	//use either InsertAtBeginning or InsertAtEnd function after having at least one element in the list.
	for(i=1; i<size && Last!=NULL; i++)
	{
		printf("Please enter element %d: ", i+1);
		scanf("%d", &var);
		Last = InsertAtEnd(Last, var);
		//InsertAtBeginning(Last, var);
	}
	return Last;
}


CNode_t* InsertAfter (CNode_t* Last, s32 AfterVal ,s32 Data)
{
	// check if the passed list is empty
	if (Last==NULL)
	{
		printf("The list is empty!!\n Recommendation: use function InsertAtEmpty\n");
		return Last;
	}
	// check if the after value is the latest element in tha list
	if (Last->Info == AfterVal)
	{
		Last = InsertAtEnd(Last, Data);
		return Last;
	}

	//loop till the after value
	CNode_t* ptr = Last->Link;
	do 
	{
		if (ptr->Info == AfterVal)
		{
			break;
		}
		ptr = ptr->Link;
	} while(ptr!= Last->Link);
	// check if the after value doesn't exist
	if (ptr == Last->Link)
	{
		printf("The After value doesn't exist in the list. Try again! bye\n");
		return Last;
	}
	//otherwise
	CNode_t* Temp = (CNode_t*)malloc(sizeof(CNode_t));
	Temp->Info = Data;
	Temp->Link = ptr->Link;
	ptr->Link = Temp;
	
	return Last;
}


void InsertBefore (CNode_t* Last, s32 BeforeVal, s32 Data)
{
	// check if the passed list is empty
	if (Last==NULL)
	{
		printf("The list is empty!!\nRecommendation: use function InsertAtEmpty\n");
		return ;
	}
	// check if the before value is the 1st element in the list
	if (BeforeVal == Last->Link->Info)
	{
		InsertAtBeginning(Last, Data);
		return ;
	}
	// otherwise
	//loop in the function searhcing for the before value
	CNode_t* ptr = Last->Link;  
	do 
	{
		if (ptr->Link->Info == BeforeVal)
		{
			break;
		}
		ptr = ptr->Link;
	}while(ptr != Last->Link);
	
	//check if the before value doesn't exist in the list
	if (ptr == Last->Link)
	{
		printf("The before value doesn't exist in the list. Try again! bye\n");
		return;
	}
	
	CNode_t* Temp = (CNode_t*)malloc(sizeof(CNode_t));
	Temp->Info = Data;
	Temp->Link = ptr->Link;
	
	ptr->Link = Temp;
}

// delete node
CNode_t* DeleteNode (CNode_t* Last, s32 Data)
{
	// check if the given list is already empty
	if (Last == NULL)
	{
		printf("OH! the given list is totaly empty \nNo deletion effort needed\n");
		return Last;
	}
	//check if it's the only existing element
	if ((Last == Last->Link) && (Last->Info == Data))
	{
		Last=NULL;
		return Last;
	}
	// check if the value is the latest element 
	// check if the value is in between
	// check if the value doesn't exist
	
	
	CNode_t* ptr = Last->Link;
	//check if the value to be deleted is the 1st value
	if (Last->Link->Info == Data)
	{
		Last->Link = ptr->Link;
		free(ptr);
		return Last;
	}

	do 
	{
		if (ptr->Link->Info == Data)
		{
			break;
		}
		ptr = ptr->Link;
	}while (ptr != Last->Link);
	
	// check if data to be deleted is the latest element
	if (ptr->Link == Last)
	{
		printf("Removing latest\n");
		CNode_t* Temp = Last->Link;
		Last = ptr;
		ptr->Link = Temp;
		free(Temp);
		return Last;
	}
	
	// check if the value doesn't exist in the list
	if (ptr == Last->Link)
	{
		printf("That value doesn't exist in the list\n");
		return Last;
	}
	printf("didn't come here\n");
	//other wise the value to be deleted is inbetween
	CNode_t* Temp = ptr->Link;
	ptr->Link = Temp->Link;
	free(Temp);
	return Last;
}

// Concatenate two lists
CNode_t* ConcatenateLists (CNode_t* Last1, CNode_t* Last2)
{
	// check if any of the lists or both is empty
	if ((Last1 == NULL) || (Last2 == NULL))
	{
		printf("One of the given lists is empty or maybe both. You need two lists with one element in each at least\ntry using CreateCircularList function\n");
		CNode_t* Last = (Last1==NULL)? Last1:Last2;
		return Last;
	}
	
	//otherwise
	CNode_t* Temp = Last1->Link;
	Last1->Link = Last2->Link;
	Last2->Link = Temp;
	return Last2;
}

//Display function
void DisplayCircularList(CNode_t* Last)
{
	// check if the list is empty
	if (Last == NULL)
	{
		printf("List is empty.. Nothing to be printed\n");
		return ;
	}
	CNode_t* ptr = Last->Link;
	printf("The List is: \n");
	do
	{
		printf("%d\t", ptr->Info);
		ptr = ptr->Link;	
	}while (ptr!= Last->Link);
	printf("\n");
}
