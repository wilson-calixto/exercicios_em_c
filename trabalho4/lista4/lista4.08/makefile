all: lista4.08a lista4.08b
lista4.08a: lista4.08a.o matriz_transposta.o util.o imprimi_matriz.o
	gcc lista4.08a.o matriz_transposta.o util.o  -o lista4.08a
lista4.08a.o: lista4.08a.c
	gcc -c lista4.08a.c
lista4.08b: lista4.08b.o  produto_escalar.o util.o
	gcc  lista4.08b.o  produto_escalar.o util.o  -o lista4.08b
lista4.08b.o: lista4.08b.c
	gcc -c lista4.08b.c
produto_escalar.o: produto_escalar.c
	gcc -c produto_escalar.c
matriz_transposta.o: matriz_transposta.c
	gcc -c matriz_transposta.c
util.o: ../../util.c/util.c
	gcc -c ../../util.c/util.c
imprimi_matriz.o: imprimi_matriz.c
	gcc -c imprimi_matriz.c
clean: 
	rm -rf *.o
remove: clean
	rm -rf lista4.08a

