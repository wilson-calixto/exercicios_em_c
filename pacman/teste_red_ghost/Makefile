all: main

main: io_blinky.o behavior.o main.o
	gcc io_blinky.o behavior.o main.o -o main -lm

main.o: main.c
	gcc -c main.c

io_blinky.o: io_blinky.c
	gcc -c io_blinky.c

behavior.o: behavior.c
	gcc -c behavior.c

clean:
	rm -rf *.o

mrproper:
	mr -rf main
