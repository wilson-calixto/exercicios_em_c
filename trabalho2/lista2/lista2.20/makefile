all: lista2.20

lista2.20: function.o lista2.20.o
	gcc lista2.20.o function.o -o lista2.20

lista2.20.o: lista2.20.c
	gcc -c lista2.20.c

function.o: function.c
	gcc -c function.c

clean:
	rm -rf *.o

mrproper:
	rm -rf lista2.20
