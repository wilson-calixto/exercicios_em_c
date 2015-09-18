all:	lista3.10

lista3.10:	funcao.o	lista3.10.o

lista3.10.o:	lista3.10.c
	gcc -c lista3.10.c

funcao.o:	funcao.c
	gcc -c funcao.c

clean:	
	rm -rf *.o

mrproper:	clean
	rm -rf lista3.10
