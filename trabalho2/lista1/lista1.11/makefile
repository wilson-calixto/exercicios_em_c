main:	    lista1.11.o funcao.o
	gcc lista1.11.o funcao.o -o lista1.11

main.o: lista1.11.c
	gcc -c lista1.11.c

funcao.o:  funcao.c	funcao.h
	gcc -c funcao.c

clean:
	rm *.o
