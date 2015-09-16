all: lista1.09 lista2.01

lista1.09: lista1.09.o util.o
	gcc lista1.09.o util.o -o lista1.09

lista1.09.0: lista1.09.c
	gcc -c lista1.09.c

// lista2.01  


lista2.01: lista2.01.o util.o
	gcc lista2.01.o util.o -o lista2.01

lista2.01.o: lista2.01.c
	gcc -o lista2.01.o -c lista2.01.c

// fim lista2.01




util.o: util.c
	gcc -c util.c

clean:
	rm -rf *.o
	
mrproper: clean
	rm -rf lista3.04
