all: lista3.06

lista3.06: util.o lista3.06.o
	gcc lista3.06.o util.o -o lista3.06

lista3.06.o: lista3.06.c
	gcc -c lista3.06.c

util.o: ../../util.c/util.c
	gcc -c ../../util.c/util.c

clean:
	rm -rf *.o

mrproper: clean
	rm -rf lista3.06
