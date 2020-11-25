#ifndef PRIOQUEUE_SLL_H_
#define PRIOQUEUE_SLL_H_
#include "../../../MyLibraries/STD_TYPES.h"


#define OK 		1
#define NOK		0


void PrioQueue_Init(void);
u8 PrioQueue_IsEmpty(void);
u8 PrioQueue_Insert(s32 Prio, s32 Data);
u8 PrioQueue_Delete(s32 *PrioPtr, s32* DataPtr);
void PrioQueue_Display(void);


#endif