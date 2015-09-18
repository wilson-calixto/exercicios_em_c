###################################Makefile###########################################
all: lista1.3
lista1.3: soma.o lista1.3.o
	gcc soma.o  lista1.3.o -o lista1.3
lista1.3.o:lista1.3.c
	gcc -c  lista1.3.c
soma.o: soma.c
	gcc -c soma.c
clean:
	rm -rf *.o
remove:
	rm -rf lista1.3
