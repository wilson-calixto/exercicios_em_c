all: lista4.03

Lista4.03: lista4.03.o util.o
	gcc lista4.03.o util.o -o lista4.03

lista4.03.o: lista4.03.c util.o
	gcc -c lista4.03.c

util.o: ../../util.c/util.c
	gcc -c ../../util.c/util.c

clean:
	rm -rf *.o

mrproper: 
	rm -rf *
