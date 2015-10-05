all: Intersecao

Intersecao:	lista4.01.a.o f4.1.a.o
	gcc lista4.01.a.o f4.1.a.o -o Intersecao

lista4.01.a.o:	lista4.01.a.c
	gcc -c lista4.01.a.c

f4.1.a.o: f4.1.a.c 
	gcc -c f4.1.a.c

clean:
	rm -rf Intersecao *.o


