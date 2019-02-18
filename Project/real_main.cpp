//C headers
#include "main.h"
#include "stm32f1xx_hal.h"

//CPP headers
#include "dac8552.h"

int main()
{
    
    //First call the old main c init function
    //Make sure the mainc function breaks the while loop there!
    mainc();
    
    //Now enter the CPP main loop
    while(1)
    {    
      HAL_Delay(100); 

    }
} 


