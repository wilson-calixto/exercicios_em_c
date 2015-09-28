all: Raios

Raios:	function.o lista2.05.o
	gcc function.o lista2.05.o -o Raios

lista2.05.o:	lista2.05.c
	gcc -c lista2.05.c

function.o:		function.c
	gcc -c function.c

clean:
	rm -rf *.o

mrproper:	clean
	rm -rf Raios
