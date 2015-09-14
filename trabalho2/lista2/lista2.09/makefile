all: lista2.09

lista2.09: util.o lista2.09.o
	gcc lista2.09.o util.o -o lista2.09

lista2.09.o: lista2.09.c
	gcc -c lista2.09.c

util.o: ../../util.c/util.c
	gcc -c ../../util.c/util.c

clean:
	rm -rf *.o

mrproper: clean
	rm -rf lista2.09
