#include "../../Core/UART/uart.h"
#include "print.h"

void print(char* argument)
{
  while(*argument != 0)
    put_char(*argument++);
}

