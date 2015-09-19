main:	    lista2.9.o funcao.o
	gcc lista2.9.o funcao.o -o lista2.9

main.o: lista2.9.c
	gcc -c lista2.9.c

funcao.o:  funcao.c	funcao.h
	gcc -c funcao.c

clean:
	rm *.o
