all: lista1.6

lista1.6: lib_function.o lista1.6.o
	gcc lista1.6.o lib_function.o -o lista1.6

lista1.6.o: lista1.6.c
	gcc -c lista1.6.c

lib_function.o: lib_function.c
	gcc -c lib_function.c

clean: 
	rm -rf *.o

mrproper: clean 
	rm -rf lista1.6
