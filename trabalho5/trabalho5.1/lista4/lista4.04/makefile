all: lista4.04

lista4.04: function.o lista4.04.o
	gcc function.o lista4.04.o -o lista4.04

lista4.04.o: lista4.04.c
	gcc -c lista4.04.c

function.o: function.c
	gcc -c function.c

clean: 
	rm -rf *.o

mrproper: clean
	rm -rf lista4.04
	clear
