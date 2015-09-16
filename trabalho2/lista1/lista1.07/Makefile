main: main.o p.o
	gcc main.o p.o -o main
main.o: main.c
	gcc -c main.c
p.o:	p.c	p.h
	gcc -c p.c
clean:
	rm *.o
