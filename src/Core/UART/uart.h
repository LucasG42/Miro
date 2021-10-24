#ifndef _UART_H_
#define _UART_H_

/* UART0 */
#define UART0_BASE (*((volatile unsigned int*)0x44E09000))
#define UART0_RHR  (*((volatile unsigned int*)0x44E09000))
#define UART0_THR  (*((volatile unsigned int*)0x44E09000))
#define UART0_LSR  (*((volatile unsigned int*)0x44E09014))

void put_char(unsigned char c);
unsigned char get_char(unsigned char c);
#endif