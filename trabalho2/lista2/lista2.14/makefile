all: lista2.14

lista2.14: city.o lista2.14.o
	gcc lista2.14.o city.o -o lista2.14

lista2.14.o: lista2.14.c
	gcc -c lista2.14.c

city.o: city.c util.h
	gcc -c city.c

clean:
	rm *.o
