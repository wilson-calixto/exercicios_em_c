all: main

main: main.o order.o
	gcc main.o order.o -o main

main.o: main.c
	gcc -c main.c

util.o: order.c
	gcc -c order.c

clean:
	rm -rf *.o

mrproper:
	rm -rf main
