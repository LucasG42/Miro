#ifndef _RTC_H_
#define _RTC_H_

#define RTC_BASE           (*((volatile unsigned int*) 0x44E3E000))
#define SECONDS_REG        (*((volatile unsigned int*) 0x44E3E000))
#define MINUTES_REG        (*((volatile unsigned int*) 0x44E3E004))
#define HOURS_REG          (*((volatile unsigned int*) 0x44E3E008))
#define RTC_CTRL_REG       (*((volatile unsigned int*) 0x44E3E040))
#define RTC_INTERRUPTS_REG (*((volatile unsigned int*) 0x44E3E048))
#define RTC_OSC_REG        (*((volatile unsigned int*) 0x44E3E054))
#define KICK0R             (*((volatile unsigned int*) 0x44E3E06C))
#define KICK1R             (*((volatile unsigned int*) 0x44E3E070))

void rtc_setup(void);

#endif

