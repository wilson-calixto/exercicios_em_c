all:	Polinomio

Polinomio:	lista4.10.o function.o
	gcc lista4.10.o function.o -o Polinomio

lista4.10.o:	lista4.10.c
	gcc -c lista4.10.c

function.o:	function.c
	gcc -c function.c

clean:
	rm -rf *.o

mrproper:	clean
	rm -rf Polinomio
