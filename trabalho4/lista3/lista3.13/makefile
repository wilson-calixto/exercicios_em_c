all: remove lista3.13a
lista3.13a: lista3.13a.o insere_resultado.o pesq_matriz.o cria_tabela.o
	gcc lista3.13a.o insere_resultado.o pesq_matriz.o cria_tabela.o -o lista3.13a
lista3.13a.o: lista3.13a.c
	gcc -c lista3.13a.c
insere_resultado.o: insere_resultado.c
	gcc -c  insere_resultado.c
pesq_matriz.o: pesq_matriz.c
	gcc -c pesq_matriz.c
cria_tabela.o: pesq_matriz.o 
	gcc  -c cria_tabela.c
clean:
	rm -rf *.o
remove:	clean
	rm -rf lista3.13a

