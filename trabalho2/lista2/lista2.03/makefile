all: lista2.3

lista2.3: function.o lista2.3.o
	gcc lista2.3.o function.o -o lista2.3

lista2.3.o: lista2.3.c
	gcc -c lista2.3.c

function.o: function.c
	gcc -c function.c

clean:
	rm -rf *.o

mrproper: clean
	rm -rf lista2.3
