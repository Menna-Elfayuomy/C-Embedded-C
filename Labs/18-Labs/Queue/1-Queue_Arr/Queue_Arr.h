#ifndef QUEUE_ARR_H_
#define QUEUE_ARR_H_
#include "../../../../MyLibraries/STD_TYPES.h"

#define OK 		1
#define NOK		0


void Queue_Init(void);
u8 Queue_IsEmpty(void);
u8 Queue_IsFull(void);
u32 Queue_GetSize(void);
u8 Queue_Insert(s32 Data);
u8 Queue_Delete(s32* DataPtr);
u8 Queue_Peek(s32* DataPtr);
void Queue_Display(void);

#endif