#include "../../../inc/registers.h"
#include "rtc.h"

void rtc_setup(void)
{
    /*  Clock enable for RTC TRM 8.1.12.6.1 */
    CM_RTC_CLKSTCTRL   = 0x2;
    CM_RTC_RTC_CLKCTRL = 0x2;

    /* Disable write protection TRM 20.3.5.23 e 20.3.5.24 */
    KICK0R = 0x83E70B13;
    KICK1R = 0x95A4F1E0;

    
    /* Select external clock*/
    RTC_OSC_REG = 0x48;

    /* Interrupt setup */
    //RTC_INTERRUPTS_REG = 0x4;   /* interrupt every second */
    //RTC_INTERRUPTS_REG = 0x5;   /* interrupt every minute */
    //RTC_INTERRUPTS_REG = 0x6;   /* interrupt every hour */

    /* Start RTC */
    RTC_CTRL_REG |= 0x01;
}