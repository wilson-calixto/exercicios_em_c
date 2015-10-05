all:	Produto

Produto:	lista3.01.o f3.1.o
	gcc lista3.01.o f3.1.o -o Produto

lista3.01.o:	lista3.01.c
	gcc -c lista3.01.c

f3.1.o:	f3.1.c
	gcc -c f3.1.c

clean:
	rm -rf *.o

mrproper:	clean
	rm -rf Produto		
