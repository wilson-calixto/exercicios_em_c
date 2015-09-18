all: lista3.13a
lista3.13a: insere_vetor.o lista3.13a.o insere_result.o
	gcc insere_vetor.o lista3.13a.o insere_result.o  -o lista3.13a
lista3.13a.o: lista3.13a.c
	gcc -c lista3.13a.c
insere_vetor.o: insere_vetor.c
	gcc -c  insere_vetor.c
insere_result.o: insere_result.c
	gcc -c insere_result.c
clean:
	rm -rf *.o
remove:	clean
	rm -rf lista3.13a

