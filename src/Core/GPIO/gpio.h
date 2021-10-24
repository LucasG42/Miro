#ifndef _GPIO_H_
#define _GPIO_H_


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

void gpio_setup();


#endif