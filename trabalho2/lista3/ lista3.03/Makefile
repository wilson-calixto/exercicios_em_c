all: lista3.3

lista3.3: lista3.3.o function.o
	gcc lista3.3.o function.o -lm -o lista3.3

function.o: function.c
	gcc -lm -c function.c

lista3.3.o: lista3.3.c
	gcc -lm -c lista3.3.c

clean:
	rm -rf *.o

mrproper:
	rm -rf lista3.3
