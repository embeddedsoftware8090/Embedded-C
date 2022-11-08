#include<reg51.h>
#include<dela.h>
sbit LED =P1^0;
sbit SW  =P1^0;
main()
{	
    while(1);
    {
        if (SW == 0)//Pressed
            LED = 0;//LED ON
        else
            LED =1;//LED OFF
        
    }
 
}


