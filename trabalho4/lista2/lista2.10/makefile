all: l2.10

l2.10: lista2.10.o 2.10.o
	gcc lista2.10.o 2.10.o -o l2.10
lista2.10.o: lista2.10.c
	gcc -c lista2.10.c
2.10.o: 2.10.c
	gcc -c 2.10.c
clean:
	rm -rf l2.10 *.o


