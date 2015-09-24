all:	lista2.9
	
lista2.9:	lista2.9.o funcao.o
	gcc lista2.9.o funcao.o -o lista2.9

lista2.9.o: lista2.9.c
	gcc -c lista2.9.c

funcao.o:  funcao.c	
	gcc -c funcao.c

clean:
	rm -rf lista2.9 *.o
