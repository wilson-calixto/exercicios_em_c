all: lista2.18

lista2.18: lista2.18.o table.o
	gcc lista2.18.o table.o -o lista2.18

lista2.18.o: lista2.18.c
	gcc -c lista2.18.c

util.o: table.c
	gcc -c table.c

clean:
	rm -rf *.o

mrproper:
	rm -rf lista2.18
