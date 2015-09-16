all: lista3.04

lista3.04: function.o lista3.04.o
	gcc lista3.04.o function.o -o lista3.04

lista3.04.o: lista3.04.c
	gcc -c lista3.04.c

function.o: function.c
	gcc -c function.c

clean:
	rm -rf *.o

mrproper: clean
	rm -rf lista2.3
