main:	    questao03.o funcao.o
	gcc questao03.o funcao.o -o questao03

main.o: questao03.c
	gcc -c questao03.c

funcao.o:  funcao.c	funcao.h
	gcc -c funcao.c

clean:
	rm *.o
