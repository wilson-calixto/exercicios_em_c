all: Produto_Escalar

Produto_Escalar: lista2.04.o function.o
	gcc lista2.04.o function.o -o Produto_Escalar 

lista2.04.o: lista2.04.c
	gcc -c lista2.04.c

function.o: function.c
	gcc -c function.c 

clean:
	rm -rf Produto_Escalar *.o
