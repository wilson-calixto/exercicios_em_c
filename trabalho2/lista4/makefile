all: lista4.4.b

lista4.4.b: util.o lista4.4.b.o
	gcc util.o lista4.4.b.o -o lista4.4.b

util.o: ../util.c/util.c
	gcc -c ../util.c/util.c

lista4.4.b.o: lista4.4.b.c
	gcc -c lista4.4.b.c

clean:
	rm -rf *.o

mrproper:
	rm -rf lista4.4.b
