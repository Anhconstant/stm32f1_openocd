



#ifndef __TIM_H__
#define __TIM_H__
#include "stm32f10x.h"

typedef struct 
{
    uint16_t Prescale   ;
    
} TIM_InitStruct;



void TIM_Init(TIM_TypeDef* TIM , TIM_InitStruct) ;


#endif