all: lista4.4.b

lista4.4.b: lista4.4.b.o util.o alfa.o
	gcc lista4.4.b.o util.o alfa.o -o lista4.4.b

lista4.4.b.o: lista4.4.b.c
	gcc -c lista4.4.b.c

alfa.o: alfa.c
	gcc -c alfa.c

util.o: ../../../util.c/util.c
	gcc -c ../../../util.c/util.c

clean:
	rm -rf *.o

mrproper:
	rm -rf lista4.4.b
