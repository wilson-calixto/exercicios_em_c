######################################makefile##################################
all: lista2.23
lista2.23: iterate_number.o lista2.23.o	
	gcc iterate_number.o lista2.23.o -o lista2.23
iterate_number.o: iterate_number.c
	gcc -c iterate_number.c
lista2.23.o: lista2.23.c
	gcc -c lista2.23.c
clean:
	rm -rf *.o
