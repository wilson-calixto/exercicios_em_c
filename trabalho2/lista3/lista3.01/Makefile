all: lista3.01

lista3.01: util.o lista3.01.o
	gcc lista3.01.o util.o -o lista3.01

lista3.01.o: lista3.01.c
	gcc -c lista3.01.c

util.o: ../../util.c/util.c
	gcc -c ../../util.c/util.c

clean:
	rm -rf *.o

mrproper: clean
	rm -rf lista3.01
