all: lista1.09 lista2.01 principal lista3.04 lista3.05

lista1.09: lista1.09.o util.o
	gcc lista1.09.o util.o -o lista1.09

lista1.09.o: lista1.09.c
	gcc -c lista1.09.c

lista2.01: lista2.01.o util.o
	gcc lista2.01.o util.o -o lista2.01

lista2.01.o: lista2.01.c
	gcc -c lista2.01.c
	
principal: principal.o util.o
	gcc principal.o util.o -o principal

principal.o: principal.c
	gcc -c principal.c
	
lista3.04: lista3.04.o util.o
	gcc lista3.04.o util.o -o lista3.04

lista3.04.o: lista3.04.c
	gcc -c lista3.04.c
	
lista3.05: lista3.05.o util.o
	gcc lista3.05.o util.o -o lista3.05

lista3.05.o: lista3.05.c
	gcc -c lista3.05.c

util.o: util.c 
	gcc -c util.c
clean:
	rm -rf *.o
mrproper: clean
	rm -rf principal lista2.01 lista3.05 lista1.09 lista3.04
