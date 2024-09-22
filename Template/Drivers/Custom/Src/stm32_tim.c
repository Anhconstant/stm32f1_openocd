#ifndef __TIM_C__
#define __TIM_C__
#include "stm32_tim.h"

TIM_InitStruct tim1 , tim2 , tim3 , tim4  ;
void TIM_Init(TIM_TypeDef* TIM , TIM_InitStruct tim){
    switch ( (uint32_t)TIM )
    {
    case (uint32_t)TIM1:
        RCC->APB2ENR |= RCC_APB2ENR_TIM1EN  ;
        break;
    case (uint32_t)TIM2:
        RCC->APB1ENR |= RCC_APB1ENR_TIM2EN  ;
        break;
    case (uint32_t)TIM3:
        RCC->APB1ENR |= RCC_APB1ENR_TIM3EN  ;
        break;
    case (uint32_t)TIM4:
        RCC->APB1ENR |= RCC_APB1ENR_TIM4EN  ;
        break;
    }
}

void TIM_Enable(TIM_TypeDef* TIM ){
    TIM->CR1    |= TIM_CR1_CEN  ;
    TIM->CNT    = 0 ;
}
void TIM_Disable(TIM_TypeDef* TIM ){
    TIM->CR1    &= ~TIM_CR1_CEN  ;
}


#endif
