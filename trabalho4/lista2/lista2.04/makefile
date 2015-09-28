all: Produto_Escalar

Produto_Escalar: lista2.04.o f2.4.o
	gcc lista2.04.o f2.4.o -o Produto_Escalar 

lista2.04.o: lista2.04.c
	gcc -c lista2.04.c

f2.4.o: f2.4.c
	gcc -c f2.4.c 

clean:
	rm -rf Produto_Escalar *.o
