#include "stm32_main.h"

int main(void)
{	
	Clock_72mhz();
	Clock_Enable_GPIOB()	;
	GPIO_Init(GPIOB,GPIO_PIN_2,General_Output_PP_2mhz)	;
	
	delay_config()	;
	
	//debug_init();
	while(1) {

		ToggleGPIO(GPIOB,GPIO_PIN_2)	;
		//Led7seg_Write('2');
		delay_ms(500);

	}
}



