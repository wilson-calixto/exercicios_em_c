all: lista3.02 

lista3.02 : lista3.02.o equacao.o util.o
	gcc lista3.02.o equacao.o util.o -o lista3.02

lista3.02.o: lista3.02.c
	gcc -o lista3.02.o -c lista3.02.c

equacao.o: equacao.c util.o
	gcc -c equacao.c
	
util.o: ../../util.c/util.c
	gcc -c ../../util.c/util.c

clean:
	rm -rf *.o

mrproper:
	rm -rf *
