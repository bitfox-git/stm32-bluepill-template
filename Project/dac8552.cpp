//Sample cpp file, to illustrate usage


//usage, write and load A : DAC8552_Send_24_bits(0x100000|data_A);
#include "dac8552.h"

//Bit banging
#define  SYNC_1()  	HAL_GPIO_WritePin(GPIOB,GPIO_PIN_12,GPIO_PIN_SET)
#define  SYNC_0()   HAL_GPIO_WritePin(GPIOB,GPIO_PIN_12,GPIO_PIN_RESET) 
#define  SCLK_1()   HAL_GPIO_WritePin(GPIOB,GPIO_PIN_13,GPIO_PIN_SET) 
#define  SCLK_0()  	HAL_GPIO_WritePin(GPIOB,GPIO_PIN_13,GPIO_PIN_RESET) 
#define  DIN_1()  	HAL_GPIO_WritePin(GPIOB,GPIO_PIN_14,GPIO_PIN_SET)   
#define  DIN_0()  	HAL_GPIO_WritePin(GPIOB,GPIO_PIN_14,GPIO_PIN_RESET) 

void DAC8552_Send_24_bits(unsigned int data)   
{   
    char i=0;   

    SYNC_1();   
    SYNC_0();   
   
    for( i=0; i<24; i++ )   
    {   
        if((data&0x800000)  == 0x800000)   
            DIN_1();           
        else   
            DIN_0();   

        SCLK_1();   
        SCLK_0();   
        data=data<<1;   
    }      
}