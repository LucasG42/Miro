#include "../../../inc/registers.h"
#include "gpio.h"

void gpio_setup()
{
  /* set clock for GPIO1, TRM 8.1.12.1.31 */
  CM_PER_GPIO1_CLKCTRL = 0x40002;

  /* clear pin 21 for output, led USR0, TRM 25.3.4.3 */
  GPIO1_OE &= ~(1<<6);
}

