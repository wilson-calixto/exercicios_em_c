all:matriz

matriz: lista4.05.o util.o
	gcc -o matriz lista4.05.o util.o 
lista4.05.o: lista4.05.c util.h
	gcc -o lista4.05.o -c lista4.05.c
util.o: util.c util.h
	gcc -o util.o -c util.c

clean:
	rm *.o 
