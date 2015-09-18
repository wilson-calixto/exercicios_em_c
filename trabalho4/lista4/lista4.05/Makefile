all:matriz

matriz: lista4.5.o util.o
	gcc -o matriz lista4.5.o util.o 
lista4.5.o: lista4.5.c util.h
	gcc -o lista4.5.o -c lista4.5.c
util.o: util.c util.h
	gcc -o util.o -c util.c

clean:
	rm *.o 
