all: lista3.09

lista3.09: lista3.09.o function.o
	gcc lista3.09.o function.o -o lista3.09

lista3.09.o: lista3.09.c
	gcc -c lista3.09.c

function.o: function.c
	gcc -c function.c

clean: 
	rm -rf *.o

mrproper: clean
	rm -rf lista3.09


