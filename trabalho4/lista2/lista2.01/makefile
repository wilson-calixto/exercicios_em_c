all: lista2.01

lista2.01: lista2.01.o util.o
	gcc lista2.01.o util.o -o lista2.01

lista2.01.o: lista2.01.c
	gcc -c lista2.01.c

util.o: ../../util.c/util.c
	gcc -c ../../util.c/util.c

clean:
	rm -rf *.o

mrproper: clean
	rm -rf lista2.01
