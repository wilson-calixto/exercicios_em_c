all:lista2.01

// lista2.01  


lista2.01: lista2.01.o util.o
	gcc lista2.01.o util.o -o lista2.01

lista2.01.o: lista2.01/lista2.01.c
	gcc -o lista2.01.o -c lista2.01/lista2.01.c

// fim lista2.01

util.o: util.c
	gcc -c util.c

clean:
	rm -rf *.o

mrproper:
	rm -rf
