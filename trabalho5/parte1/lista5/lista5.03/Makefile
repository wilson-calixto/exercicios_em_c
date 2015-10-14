all: lista5.03

lista5.03: int2string.o lista5.03.o
	gcc lista5.03.o int2string.o -o lista5.03

lista5.03.o: lista5.03.c
	gcc -c lista5.03.c

int2string.o: int2string.c
	gcc -c int2string.c

clean:
	rm -rf *.o

