all: main

main: main.o util.o
	gcc main.o util.o -o main

main.o: main.c
	gcc -c main.c

util.o: util.c
	gcc -c util.c

clean:
	rm -rf *.o

mrproper:
	rm -rf main
