all:lista4.04

lista4.04: ff.o lista4.04.o
	gcc ff.o lista4.04.o -o lista4.04

ff.o: ff.c
	gcc -c ff.c

lista4.04.o: lista4.04.c
	gcc -c lista4.04.c

clean:
	rm -rf *.o

mrproper: clean
	rm -rf lista4.04
