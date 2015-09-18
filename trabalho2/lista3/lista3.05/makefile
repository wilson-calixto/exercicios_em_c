main:	    lista3.5.o funcao.o
	gcc lista3.5.o funcao.o -o lista3.5

main.o: lista3.5.c
	gcc -c lista3.5.c

funcao.o:  funcao.c	funcao.h
	gcc -c funcao.c

clean:
	rm *.o
