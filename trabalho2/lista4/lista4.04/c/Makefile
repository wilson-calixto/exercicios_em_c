all: lista4.4.c

lista4.4.c: lista4.4.c.o util.o s_sort.o
	gcc lista4.4.c.o util.o s_sort.o -o lista4.4.c

lista4.4.c.o: lista4.4.c.c
	gcc -c lista4.4.c.c

util.o: ../../../util.c/util.c
	gcc -c ../../../util.c/util.c

s_sort.o: s_sort.c
	gcc -c s_sort.c

clean:
	rm -rf *.o

mrproper:
	rm -rf lista4.4.c
 
