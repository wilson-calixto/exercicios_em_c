all: lista3.15

lista3.15: matriz.o lista3.15.o
	gcc matriz.o lista3.15.o -o lista3.15

matriz.o: matriz.c
	gcc -c matriz.c

lista3.15.o: lista3.15.c
	gcc -c lista3.15.c

clean:
	rm -rf *.o
