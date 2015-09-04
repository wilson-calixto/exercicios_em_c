all: lista2.25

lista2.25: function.o lista2.25.o
	gcc lista2.25.o function.o -o lista2.25

lista2.25.o: lista2.25.c
	gcc -c lista2.25.c

function.o: function.c
	gcc -c function.c

clean:
	rm -rf *.o
mrproper: clean
	rm -rf lista2.25
