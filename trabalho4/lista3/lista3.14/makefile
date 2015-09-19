all:lista3.14

lista3.14:funcao.o lista3.14.o
	gcc funcao.o lista3.14.o -o lista3.14

funcao.o:funcao.c
	gcc -c funcao.c

lista3.14.o:lista3.14.c
	gcc -c lista3.14.c

clean:
	rm -rf *.o

mrproper:
	rm -rf lista3.14
