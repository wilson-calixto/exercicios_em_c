all: lista1.09

lista1.09: lista1.09.o util.o
	gcc lista1.09.o util.o -o lista1.09

lista1.09.0: lista1.09.c
	gcc -c lista1.09.c








util.o: util.c
	gcc -c util.c

clean:
	rm -rf *.o
	
mrproper: clean
	rm -rf lista3.04
