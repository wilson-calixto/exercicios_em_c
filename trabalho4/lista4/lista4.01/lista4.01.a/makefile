all: Intersecao

Intersecao:	lista4.01.a.o function.o
	gcc lista4.01.a.o function.o -o Intersecao

lista4.01.a.o:	lista4.01.a.c
	gcc -c lista4.01.a.c

function.o: function.c function.h
	gcc -c function.c

clean:
	rm -rf Intersecao *.o


