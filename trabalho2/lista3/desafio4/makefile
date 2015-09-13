all: lista3.d4

lista3.d4: reverse.o lista3.d4.o
	gcc lista3.d4.o reverse.o -o lista3.d4

lista3.d4.o: lista3.d4.c
	gcc -c lista3.d4.c

reverse.o: reverse.c
	gcc -c reverse.c

clean:
	rm -rf *.o

