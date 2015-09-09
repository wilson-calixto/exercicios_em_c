############################# Makefile ##########################
all: lista1.8
lista1.8: util.o lista1.8.o
	gcc lista1.8.o util.o -o lista1.8
lista1.8.o: lista1.8.c
	gcc -c lista1.8.c
util.o: ../../util.c/util.c
	gcc -c ../../util.c/util.c 	
clean:
	rm -rf *.o
mrproper: clean
	rm -rf lista1.8
