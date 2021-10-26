#include "../../../inc/registers.h"
void delay1s(void)
{
  //unsigned int d = 0xfffffff;
  //while(d--);

  unsigned char s = SECONDS_REG;
  while (s==SECONDS_REG);
}

