all: lista2.25

lista2.25: util.o lista2.25.o
	gcc lista2.25.o util.o -o lista2.25

lista2.25.o: lista2.25.c
	gcc -c lista2.25.c

util.o: ../../util.c/util.c
	gcc -c ../../util.c/util.c

clean:
	rm -rf *.o

mrproper: clean
	rm -rf lista2.25
