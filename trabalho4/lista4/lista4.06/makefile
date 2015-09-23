all: lista4.6

lista4.6:	    lista4.6.o funcao.o
	gcc lista4.6.o funcao.o -o lista4.6

lista4.6.o: lista4.6.c
	gcc -c lista4.6.c

funcao.o:  funcao.c	funcao.h
	gcc -c funcao.c

clean:
	rm -rf lista4.6 *.o
