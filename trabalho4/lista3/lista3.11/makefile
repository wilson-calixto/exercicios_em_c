all: lista3.11

lista3.11: lista3.11.o f3.11.o
	gcc lista3.11.o f3.11.o -o lista3.11

lista3.11.o:	lista3.11.c
	gcc -c lista3.11.c

f3.11.o: f3.11.c
	gcc -c f3.11.c

clean:
	rm -rf *.o

mrproper: clean
	rm -rf lista3.11
