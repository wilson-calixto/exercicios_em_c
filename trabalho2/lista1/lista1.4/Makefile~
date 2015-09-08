all:lista.01.04

lista.01.04: util.o lista.01.04.o
	gcc util.o lista.01.04.o -o lista.01.04
util.o: ../../util.c/util.c
	gcc -c ../../util.c/util.c
lista.01.04.o:lista.01.04.c
	gcc -c lista.01.04.c
clean:
	rm *.o
mrproper:
	rm -rf lista.01.04







