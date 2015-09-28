all: lista4.4.a

lista4.4.a: lista4.4.a.o util.o
	gcc lista4.4.a.o util.o -o lista4.4.a

lista4.4.a.o: lista4.4.a.c
	gcc -c lista4.4.a.c

util.o: ../../../util.c/util.c
	gcc -c ../../../util.c/util.c

clean:
	rm -rf *.o

mrproper:
	rm -rf lista4.4.a
