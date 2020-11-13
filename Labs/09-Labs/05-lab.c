#include <stdio.h>
#include <stdlib.h>
#include "D:\NTI\C_projects\Labs\07-Labs\STD_TYPES.h"

void func1(s32 y);
void func2(s32 y);
void func3(s32 y);
void handleMenu (void (*funcPtr)(s32), s32 y);

int main(){
	//creating array of pointers to functions
	void (*Arr[3])(s32 w)={func1, func2, func3};
	
	s32 x;
	printf("Please enter a selection between 1 to 3: ");
	scanf("%d", &x);
	
	if (x>0 & x<4){
		handleMenu (Arr[x-1], x);
	}
	else{
		printf("Not a valid option. Exiting....\n");
		exit(1);
	}
	return 0;
}

//function that takes another function

/*
the function handleMenu is defined to take a function as input arrgmument 
syntax is as following: 
(return type) (name) (pointer to the other function, arrgument of the other function none from the decleration of its pointer)
________________________________________________________
the pointer to the other function 
syntax is as following:
(pointee function return type) (*name of the pointer) (type of arrguments of the pointee function)
________________________________________________________
inside the body of the function that takes another functiona as arrgument
we commony call the other function using its address
syntax of derefrencing the pointer as following:
(*pointer name)(input arrguments of the other function)
*/

void handleMenu (void (*funcPtr)(s32), s32 y){
	//derefrencing the pointer that points to a certain function
	(*funcPtr)(y);
}

void func1(s32 y){
	printf("You entered option %d, so function1 was called\n", y);
}

void func2(s32 y){
	printf("You entered option %d, so function2 was called\n", y);
}

void func3(s32 y){
	printf("You entered option %d, so function3 was called\n", y);
}