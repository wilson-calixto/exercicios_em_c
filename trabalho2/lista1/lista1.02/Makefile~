all: lista1.02

lista1.02: p.o lista1.02.o
	gcc p.o lista1.02.o -o lista1.02

lista1.02.o: lista1.02.c
	gcc -c lista1.02.c

p.o: p.c
	gcc -c p.c

clean:
	rm -rf lista1.02 *.o
