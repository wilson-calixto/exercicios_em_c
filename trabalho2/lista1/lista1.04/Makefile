all:lista1.04

lista1.04: util.o lista1.04.o
	gcc util.o lista1.04.o -o lista1.04
util.o: ../../util.c/util.c
	gcc -c ../../util.c/util.c
lista1.04.o:lista1.04.c
	gcc -c lista1.04.c
clean:
	rm *.o
mrproper:
	rm -rf lista1.04







