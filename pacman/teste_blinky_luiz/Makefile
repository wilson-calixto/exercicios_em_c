all: main

main: io_blinky.o target.o main.o
	gcc io_blinky.o target.o main.o -o main -lm

main.o: main.c
	gcc -c main.c

io_blinky.o: io_blinky.c
	gcc -c io_blinky.c

target.o: target.c
	gcc -c target.c

clean:
	rm -rf *.o
