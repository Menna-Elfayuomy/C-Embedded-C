#include <stdio.h>
#include <stdlib.h>
#include "../../MyLibraries/STD_TYPES.h"
#include "CircularList.h"


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

void InsertAtBeginning (CNode_t* Last, s32 Data)
{
	// check if the given list is empty
	if (Last ==NULL)
	{
		printf("Warning!! the given list is totaly empty :| use function InsertInEmpty instead \n");
	}
	
	CNode_t* ptr = Last->Link;
	// initialize a temp pointer to be the new first element in the list
	CNode_t* Temp = (CNode_t*)malloc(sizeof(CNode_t));
	Temp->Info = Data;
	Temp->Link = ptr;
	
	Last->Link = Temp;
}

CNode_t* InsertAtEmpty (s32 Data)
{
	// for the empty list the 1st element is the same as the latest element
	CNode_t* Last = (CNode_t*)malloc(sizeof(CNode_t));
	Last->Info = Data;
	//point to itself
	Last->Link = Last;
	return Last;
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