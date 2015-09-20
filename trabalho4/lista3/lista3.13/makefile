all: remove lista3.13a
lista3.13a: lista3.13a.o insere_resultado.o pesq_matriz.o cria_tabela.o imprime_tabela.o gera_dados.o
	gcc lista3.13a.o insere_resultado.o pesq_matriz.o cria_tabela.o imprime_tabela.o gera_dados.o   -o lista3.13a -g
lista3.13a.o: lista3.13a.c
	gcc -c lista3.13a.c -g
insere_resultado.o: insere_resultado.c
	gcc -c  insere_resultado.c -g
pesq_matriz.o: pesq_matriz.c
	gcc -c pesq_matriz.c -g
cria_tabela.o: pesq_matriz.o 
	gcc -c cria_tabela.c -g
imprime_tabela.o: imprime_tabela.c
	gcc -c imprime_tabela.c -g
gera_dados.o: gera_dados.c
	gcc -c gera_dados.c
clean:
	rm -rf *.o
remove:	clean
	rm -rf lista3.13a

