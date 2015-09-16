all: lista1.09 lista2.01 lista3.5 principal

lista1.09: lista1.09.o util.o
	gcc lista1.09.o util.o -o lista1.09

lista1.09.0: lista1.09.c
	gcc -c lista1.09.c

lista2.01: lista2.01.o util.o
	gcc lista2.01.o util.o -o lista2.01

lista2.01.o: lista2.01.c
	gcc -c lista2.01.c

lista3.5: lista3.5.o util.o
	gcc lista3.5.o util.o -o lista3.5

lista3.5.o: lista3.5.c
	gcc -c lista3.5.c
	
principal: principal.o util.o
	gcc principal.o util.o -o principal

principal.o: principal.c
	gcc -c principal.c





util.o: util.c
	gcc -c util.c

clean:
	rm -rf *.o
	
mrproper: clean
	rm -rf principal lista2.01 lista3.5 lista1.09
