all: lista1.5

lista1.5: sum_imp.o lista1.5.o 
	gcc lista1.5.o sum_imp.o -o lista1.5

lista1.5.o: lista1.5.c
	gcc -c lista1.5.c

soma_imposto.o: sum_imp.c sum_imp.h
	gcc -c sum_imp.c

clean:
	rm *.o