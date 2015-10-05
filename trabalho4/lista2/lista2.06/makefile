all: lista2.06

lista2.06: lista2.06.o util.o
	gcc lista2.06.o util.o -o lista2.06

lista2.06.o: lista2.06.c util.o
	gcc -c lista2.06.c

util.o: ../../util.c/util.c
	gcc -c ../../util.c/util.c

clean: 
	rm -rg *.o
