all: lista2.04

lista2.04: lista2.04.o NumeroChar.o
	gcc lista2.04.o NumeroChar.o -o lista2.04

lista2.04.o: lista2.04.c
	gcc -c lista2.04.c

NumeroChar.o: NumeroChar.c
	gcc -c NumeroChar.c

clean:
	rm -rf *.o

mrproper: clean
	rm -rf lista2.04
