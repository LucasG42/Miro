#include "watchdog.h"

void disable_wdt(void)
{
  WDT_WSPR = 0xAAAA;
  while((WDT_WWPS & (1<<4)));
  WDT_WSPR = 0x5555;
  while((WDT_WWPS & (1<<4)));
}