all:	Produto

Produto:	lista3.01.o function.o
	gcc lista3.01.o function.o -o Produto

lista3.01.o:	lista3.01.c
	gcc -c lista3.01.c

function.o:	function.o
	gcc -c function.c

clean:
	rm -rf *.o

mrproper:	clean
	rm -rf Produto		
