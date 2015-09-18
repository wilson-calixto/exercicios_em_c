all: lista2.12

lista2.12: lista2.12.o function.o
	gcc lista2.12.o function.o -o lista2.12

lista2.12.o: lista2.12.c
	gcc -c lista2.12.c

function.o: function.c
	gcc -c function.c

clean:
	rm -rf *.o

mrproper: clean
	rm -rf lista2.12

