all:lista1.14

lista1.14: util.o lista1.14.o
	gcc util.o lista1.14.o -o lista1.14

util.o: util.c
	gcc -c util.c

lista1.14.o: lista1.14.c
	gcc -c lista1.14.c

clean:
	rm -rf *.o

mrproper: clean
	rm -rf lista1.14
