all: lista4.08

lista4.08: funcao.o lista4.08.o
	gcc funcao.o lista4.08.o -o lista4.08

lista4.08.o: lista4.08.c
	gcc -c lista4.08.c

funcao.o: funcao.c
	gcc -c funcao.c

clean: 
	rm -rf *.o

mrproper: clean
	rm -rf lista4.08
