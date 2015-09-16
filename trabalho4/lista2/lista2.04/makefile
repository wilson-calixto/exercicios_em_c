Produto_Escalar:	ex4.o function.o
	gcc ex4.o function.o -o Produto_Escalar

ex4.o:	ex4.c
	gcc -c ex4.c

function.o: function.c function.h
	gcc -c function.c 

clean:
	rm *.o
