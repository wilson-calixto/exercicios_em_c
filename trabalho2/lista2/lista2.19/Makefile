divisores: funcoes.o divisores.o
	gcc divisores.o funcoes.o -o divisores
divisores.o: divisores.c
	gcc -c divisores.c
funcoes.o:	funcoes.c	util.h
	gcc -c funcoes.c
clean:
	rm *.o
