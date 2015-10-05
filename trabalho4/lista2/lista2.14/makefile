all: lista2.14

lista2.14: lista2.14.o f2.14.o
	gcc lista2.14.o f2.14.o -o lista2.14

lista2.14.o: lista2.14.c
	gcc -c lista2.14.c

f2.14.o: f2.14.c
	gcc -c f2.14.c

clean:
	rm -rf *.o

mrproper: clean
	rm -rf lista2.14

