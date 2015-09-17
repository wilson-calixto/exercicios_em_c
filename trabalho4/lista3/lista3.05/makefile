all:	lista3.5

lista3.5:	funcao.o	programa.o

lista3.5.o:	lista3.5.c
	gcc -c lista3.5.c

funcao.o:	funcao.c
	gcc -c funcao.c

clean:	
	rm -rf *.o

mrproper:	clean
	rm -rt lista3.5
