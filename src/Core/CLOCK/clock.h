#ifndef _CLOCK_H_
#define _CLOCK_H_

#define CM_PER_GPIO1_CLKCTRL (*((volatile unsigned int*) 0x44e000AC))
#define CM_PER_GPIO2_CLKCTRL (*((volatile unsigned int*) 0x44e000AC))
#define CM_PER_GPIO3_CLKCTRL (*((volatile unsigned int*) 0x44e000AC))
#define CM_RTC_RTC_CLKCTRL   (*((volatile unsigned int*) 0x44E00800))
#define CM_RTC_CLKSTCTRL     (*((volatile unsigned int*) 0x44E00804))

#endif