all: lista3.13a
lista3.13a: insere_vetor.o lista3.13a.o
	gcc insere_vetor.o lista3.13a.o -o lista3.13a
lista3.13a.o: lista3.13a.c
	gcc -c lista3.13a.c
insere_vetor.o: insere_vetor.c
	gcc -c  insere_vetor.c
clean:
	rm -rf *.o
remove:	clean
	rm -rf lista3.13a

