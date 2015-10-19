all: Velha

Velha: util.o velha.o
	gcc util.o velha.o -o Velha

velha.o: velha.c
	gcc -c velha.c

util.o: util.c
	gcc -c util.c

clean:
	rm -rf *.o

mrproper: clean
	rm -rf Velha
