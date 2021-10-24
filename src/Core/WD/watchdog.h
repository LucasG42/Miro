#ifndef _WATCHDOG_H_
#define _WATCHDOG_H_

/* Watch Dog Timer */
#define  WDT_BASE (*((volatile unsigned int*)0x44E35000))
#define  WDT_WSPR (*((volatile unsigned int*)0x44E35048))
#define  WDT_WWPS (*((volatile unsigned int*)0x44E35034))

void disable_wdt(void);

#endif