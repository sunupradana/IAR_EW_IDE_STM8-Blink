/*
sumber: http://embedonix.com/articles/embedded-projects/getting-started-with-stm8-development-part-1-blinking-a-led/
*/

#include <iostm8s003f3.h>

void delay(unsigned int n)
{
    while (n-- > 0);
}

//main entry point
int main( void ){
 
    PB_ODR = 0; //Turn off all pins
    PB_DDR_DDR5 = 1; //PortB, Bit 5 is output (PD5 - Data Direction Register)
    PB_CR1_C15 = 1; //PortB, Control Register 1, Bit 5 (PD5) set to Push-Pull
    PB_CR2_C25 = 1; //PortB, Control Register 2, Bit 5 (PD5) set to Push-Pull
      
    while (1)
    {
        //Turn on and off the output and then delay
        PB_ODR_bit.ODR5 = !PB_ODR_bit.ODR5;
        delay(40000);
    }
}
