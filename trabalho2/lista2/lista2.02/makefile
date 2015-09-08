all: lista2.2

lista2.2: function.o lista2.2.o
	gcc lista2.2.o function.o -o lista2.2

lista2.2.o: lista2.2.c
	gcc -c lista2.2.c

function.o: function.c
	gcc -c function.c

clean:
	rm -rf *.o

mrproper: clean
	rm -rf lista2.2
