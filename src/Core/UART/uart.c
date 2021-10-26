#include "../../../inc/registers.h"
#include "uart.h"
void put_char(unsigned char c)
{
  while(!(UART0_LSR & (1<<5)));

  UART0_THR = c;
}

unsigned char get_char(unsigned char c)
{
  while(!(UART0_LSR & (1<<0)));

  return (unsigned char)UART0_RHR;
}