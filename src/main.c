#include "Core/GPIO/gpio.h"
#include "Core/RTC/rtc.h"
#include "Core/WD/watchdog.h"
#include "Core/TIMER/timer.h"
#include "UTILS/TIMERS/timers.h"
#include "IO/PRINT/print.h"

void ledOff(void)
{
  GPIO1_CLEARDATAOUT = (1<<21);
}

void ledOn(void)
{
  GPIO1_SETDATAOUT = (1<<21);
}


int main(void)
{
  /* Hardware setup */
  gpio_setup();
  rtc_setup();
  disable_wdt();

  print("Ola Mundo\r\n");
  
  while(1)
  {

     ledOn();
     delay1s();
     print_time();

     ledOff();
     delay1s();
     print_time();
  }
  return 0;
}
