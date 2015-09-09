all: lista2.15

lista2.15: function.o lista2.15.o
	gcc lista2.15.o function.o -o lista2.15

lista2.15.o: lista2.15.c
	gcc -c lista2.15.c

function.o: function.c
	gcc -c function.c

clean:
	rm -rf *.o

mrproper: clean
	rm -rf lista2.15
