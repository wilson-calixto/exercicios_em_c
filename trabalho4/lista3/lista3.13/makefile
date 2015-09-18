all: lista3.13a
lista3.13a: lista3.13a.o insere_resultado.o
	gcc lista3.13a.o insere_resultado.o  -o lista3.13a
lista3.13a.o: lista3.13a.c
	gcc -c lista3.13a.c
insere_resultado.o: insere_resultado.c
	gcc -c  insere_resultado.c
clean:
	rm -rf *.o
remove:	clean
	rm -rf lista3.13a

