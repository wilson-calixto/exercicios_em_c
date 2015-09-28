all:	lista2.9
	
lista2.9:	lista2.9.o f2.9.o
	gcc lista2.9.o f2.9.o -o lista2.9

lista2.9.o: lista2.9.c
	gcc -c lista2.9.c

f2.9.o:  f2.9.c	
	gcc -c f2.9.c

clean:
	rm -rf lista2.9 *.o
