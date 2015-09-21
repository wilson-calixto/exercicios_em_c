all: lista3.11

cliente: lista3.11.o function.o
	gcc lista3.11.o function.o -o cliente

lista3.11.o: lista3.11.c
	gcc -c lista3.11.c

function.o: function.c
	gcc -c function.c

clean:
	rm -rf *.o

mrproper: clean
	rm -rf lista3.11
