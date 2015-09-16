all: lista4.08a
lista4.08a: lista4.08a.o matriz_transposta.o
	gcc lista4.08a.o matriz_transposta.o -o lista4.08a
lista4.08a.o: lista4.08a.c
	gcc -c lista4.08a.c
matriz_transposta.o: matriz_transposta.c
	gcc -c matriz_transposta.c
clean: 
	rm -rf *.o
remove: clean
	rm -rf lista4.08a

