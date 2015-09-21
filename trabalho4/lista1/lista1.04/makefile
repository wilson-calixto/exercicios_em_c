all: lista1.04

lista1.04: preencher.o lista1.04.o
	gcc preencher.o lista1.04.o -o lista1.04

preencher.o: preencher.c
	gcc -c preencher.c

lista1.04.o: lista1.04.o
	gcc -c lista1.04.c

clean:
	rm -rf *.o

mrproper: clean
	rm -rf lista1.04
