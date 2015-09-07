all: lista1.5

lista1.5: soma_imposto.o lista1.5.o 
	gcc: lista1.5.o soma_imposto.o -o lista1.5

lista1.5.o: lista1.5.c
	gcc -c lista1.5.c

soma_imposto.o: soma_imposto.c util.h
	gcc soma_imposto.c

clean:
	rm *.o