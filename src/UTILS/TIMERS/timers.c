#include "../../Core/RTC/rtc.h"
#include "../../Core/UART/uart.h"
void print_time(void)
{
  unsigned char h,m,s;

  h = HOURS_REG;
  m = MINUTES_REG;
  s = SECONDS_REG;
 
  //converte de BCD para ascii
  //hora
  put_char(0x30 + ((h >> 4) & 0x3)); //dezena
  put_char(0x30 + ((h >> 0) & 0xf)); //unidade
  put_char(':');
  //minutos
  put_char(0x30 + ((m >> 4) & 0x7)); //dezena
  put_char(0x30 + ((m >> 0) & 0xf)); //unidade
   put_char(':');
  //segundos
  put_char(0x30 + ((s >> 4) & 0x7)); //dezena
  put_char(0x30 + ((s >> 0) & 0xf)); //unidade

  put_char('\r');
}