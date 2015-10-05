all: lista4.06 lista4.06.2

lista4.06: sf_extend.o lista4.06.o
	gcc sf_extend.o lista4.06.o -o lista4.06

lista4.06.2: sf_extend.o lista4.06.2.o
	gcc sf_extend.o lista4.06.2.o -o lista4.06.2

sf_extend.o: sf_extend.c
	gcc -c sf_extend.c

lista4.06.o: lista4.06.c
	gcc -c lista4.06.c

lista4.06.2.o: lista4.06.2.c
	gcc -c lista4.06.2.c

clean:
	rm -rf *.o

mrproper:
	rm -rf lista4.06
