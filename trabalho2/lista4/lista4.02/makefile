all: lista4.02

lista4.02:funcao.o lista4.02.o
	gcc funcao.o lista4.02.o -o lista4.02

funcao.o:funcao.c
	gcc -c funcao.c

lista4.02.o:lista4.02.c 
	gcc -c lista4.02.c

clean:
	rm -rf *.o
mrproper:
	rm -rf lista4.02
