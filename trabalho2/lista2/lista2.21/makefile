all:lista2.21

lista2.21:funcao.o lista2.21.o
	gcc funcao.o lista2.21.o -o lista2.21
funcao.o:funcao.c
	gcc -c funcao.c
lista2.21.o:lista2.21.c funcao.h
	gcc -c lista2.21.c
clean:
	rm -rf *.o
mrproper:clean
	rm -rf lista2.21
