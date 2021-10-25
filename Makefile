CROSS_COMPILE ?= arm-linux-gnueabihf-

all: libutils main 

libutils: libio 
	$(CROSS_COMPILE)gcc -c src/UTILS/TIMERS/timers.c -o obj/libutils/timers.o -L./lib  -lio 
	ar rc lib/libutils.a obj/libutils/*.o

libio: libcore 
	$(CROSS_COMPILE)gcc -c src/IO/PRINT/print.c  -L./lib -lcore -o obj/libio/print.o 
	ar rc lib/libio.a obj/libio/*.o

libcore:
	$(CROSS_COMPILE)as init/startup/startup.s -o obj/startup.o
	$(CROSS_COMPILE)gcc -c src/Core/GPIO/gpio.c -o obj/libcore/gpio.o
	$(CROSS_COMPILE)gcc -c src/Core/RTC/rtc.c -o obj/libcore/rtc.o
	$(CROSS_COMPILE)gcc -c src/Core/TIMER/timer.c -o obj/libcore/timer.o
	$(CROSS_COMPILE)gcc -c src/Core/UART/uart.c -o obj/libcore/uart.o
	$(CROSS_COMPILE)gcc -c src/Core/WD/watchdog.c -o obj/libcore/watchdog.o
	ar rc lib/libcore.a obj/libcore/*.o

main:
	$(CROSS_COMPILE)gcc -c src/main.c -o obj/main.o 
	$(CROSS_COMPILE)ld -T init/memmap/memmap obj/startup.o obj/main.o -L./lib -lutils -lcore -lio -o init/startup/startup
	$(CROSS_COMPILE)objcopy init/startup/startup init/startup/startup.bin -O binary
	$(CROSS_COMPILE)objdump -DSx -b binary -marm init/startup/startup.bin > init/startup/startup.lst
	mv init/startup/startup.bin /home/lucas/TPSE2/tftp

clean:
	rm -rf init/startup/startup
	rm -rf init/startup/*.lst
	rm -rf lib/*.a
	rm -rf obj/libcore/*.o
	rm -rf obj/libio/*.o
	rm -rf obj/libutils/*.o
	rm -rf obj/*.o
