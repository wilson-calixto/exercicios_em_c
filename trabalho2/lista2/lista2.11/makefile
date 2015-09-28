all: lista2.11

lista2.11: p.o lista2.11.o
	gcc lista2.11.o p.o -o lista2.11

lista2.11.o: lista2.11.c
	gcc -c lista2.11.c

p.o: p.c
	gcc -c p.c

clean:
	rm -rf *.o
