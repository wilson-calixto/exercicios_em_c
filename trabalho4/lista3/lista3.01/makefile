all: lista3.1

lista3.1: lista3.1.o function.o
	gcc lista3.1.o function.o -o lista3.1

lista3.1.o: lista3.1.c 
	gcc -c lista3.1.c

function.o: function.c
	gcc -c function.c

clean:
	rm -rf lista3.1 *.o
