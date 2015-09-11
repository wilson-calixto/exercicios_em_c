all: lista4.1

lista4.1: lista4.1.o contadigitos.o
	gcc lista4.1.o contadigitos.o -o lista4.1

lista4.1.o: lista4.1.c
	gcc -c lista4.1.c

util.o: contadigitos.c
	gcc -c contadigitos.c

clean:
	rm -rf *.o

mrproper:
	rm -rf lista4.1
