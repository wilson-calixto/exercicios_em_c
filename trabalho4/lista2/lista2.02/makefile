all: lista2.02

lista2.02: lista2.02.o process.o
	gcc lista2.02.o process.o -o lista2.02

lista2.02.o: lista2.02.c
	gcc -c lista2.c

process.o: process.c
	gcc -c process.c

clean:
	rm -rf *.o
	
mrproper: clean
	rm -rf lista2.02

