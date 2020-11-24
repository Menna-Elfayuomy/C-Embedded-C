#ifndef STACK_SLL_H_
#define STACK_SLL_H_
#include "../../../../MyLibraries/STD_TYPES.h"


#define OK 		1
#define NOK		0

void Stack_Initialize(void);
u8 Stack_IsEmpty(void);
u32 Stack_GetSize(void);
u8 Stack_Push(s32 Data);
u8 Stack_Pop(s32* DataPtr);
u8 Stack_Peek(s32* DataPtr);
void Stack_Display(void);

#endif