all:lista3.10

lista3.10:funcao.o lista3.10.o
	gcc funcao.o lista3.10.o -o lista3.10
funcao.o:funcao.c
	gcc -c funcao.c
lista3.10.0:lista.3.10.c
	gcc -c lista3.10.c
clean:
	rm -rf lista3.10 *.o
mrproper:clean
	rm -rf lista3.10 *.o
