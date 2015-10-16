all: Velha

Velha: util.o velha.o
	gcc util.o velha.o -o Velha

velha.o: velha.c
	gcc -c velha.c

util.o: util.c
	gcc -c util.c

clear:
	rm -rf *.o

mrproper:
	rm -rf Velha
