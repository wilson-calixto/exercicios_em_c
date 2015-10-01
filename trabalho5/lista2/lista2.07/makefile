main:	    lista2.07.o funcao.o
	gcc lista2.07.o funcao.o -o lista2.07

main.o: lista2.07.c
	gcc -c lista2.07.c

funcao.o:  funcao.c	funcao.h
	gcc -c funcao.c

clean:
	rm *.o
