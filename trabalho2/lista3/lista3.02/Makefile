all: lista3.2

lista3.2: lista3.2.o delta.o
	gcc lista3.2.o delta.o -o lista3.2

lista3.2.o: lista3.2.c delta.h
	gcc -c lista3.2.c

delta.o: delta.c
	gcc -c delta.c

clean:
	rm -rf *.o

mrproper:
	rm -rf lista3.2
