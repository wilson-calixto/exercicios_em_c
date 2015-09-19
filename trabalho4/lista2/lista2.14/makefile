all: lista2.14

lista2.14: lista2.14.o function.o
	gcc lista2.14.o function.o -o lista2.14

lista2.14.o: lista2.14.c
	gcc -c lista2.14.c

function.o: function.c
	gcc -c function.c

clean:
	rm -rf *.o

mrproper: clean
	rm -rf lista2.14

