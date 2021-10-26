#ifndef _REGISTERS_H_
#define _REGISTERS_H_

//Clock
#define CM_PER_GPIO1_CLKCTRL (*((volatile unsigned int*) 0x44e000AC))
#define CM_PER_GPIO2_CLKCTRL (*((volatile unsigned int*) 0x44e000AC))
#define CM_PER_GPIO3_CLKCTRL (*((volatile unsigned int*) 0x44e000AC))
#define CM_RTC_RTC_CLKCTRL   (*((volatile unsigned int*) 0x44E00800))
#define CM_RTC_CLKSTCTRL     (*((volatile unsigned int*) 0x44E00804))

//GPIO

/* GPIO 1*/
#define GPIO1_OE            (*((volatile unsigned int*) 0x4804C134))
#define GPIO1_SETDATAOUT    (*((volatile unsigned int*) 0x4804C194))
#define GPIO1_CLEARDATAOUT  (*((volatile unsigned int*) 0x4804C190))


/* GPIO 2*/
#define GPIO2_OE            (*((volatile unsigned int*) 0x481AC134))
#define GPIO2_SETDATAOUT    (*((volatile unsigned int*) 0x481AC194))
#define GPIO2_CLEARDATAOUT  (*((volatile unsigned int*) 0x481AC190))


/* GPIO 3*/
#define GPIO3_OE            (*((volatile unsigned int*) 0x481AE134))
#define GPIO3_SETDATAOUT    (*((volatile unsigned int*) 0x481AE194))
#define GPIO3_CLEARDATAOUT  (*((volatile unsigned int*) 0x481AE190))


// RTC

#define RTC_BASE           (*((volatile unsigned int*) 0x44E3E000))
#define SECONDS_REG        (*((volatile unsigned int*) 0x44E3E000))
#define MINUTES_REG        (*((volatile unsigned int*) 0x44E3E004))
#define HOURS_REG          (*((volatile unsigned int*) 0x44E3E008))
#define RTC_CTRL_REG       (*((volatile unsigned int*) 0x44E3E040))
#define RTC_INTERRUPTS_REG (*((volatile unsigned int*) 0x44E3E048))
#define RTC_OSC_REG        (*((volatile unsigned int*) 0x44E3E054))
#define KICK0R             (*((volatile unsigned int*) 0x44E3E06C))
#define KICK1R             (*((volatile unsigned int*) 0x44E3E070))


// WATCHDOG

/* Watch Dog Timer */
#define  WDT_BASE (*((volatile unsigned int*)0x44E35000))
#define  WDT_WSPR (*((volatile unsigned int*)0x44E35048))
#define  WDT_WWPS (*((volatile unsigned int*)0x44E35034))


//UART


/* UART0 */
#define UART0_BASE (*((volatile unsigned int*)0x44E09000))
#define UART0_RHR  (*((volatile unsigned int*)0x44E09000))
#define UART0_THR  (*((volatile unsigned int*)0x44E09000))
#define UART0_LSR  (*((volatile unsigned int*)0x44E09014))


#endif