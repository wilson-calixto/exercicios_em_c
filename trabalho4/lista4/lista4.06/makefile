all: lista4.6

lista4.6:	    lista4.6.o f4.6.o
	gcc lista4.6.o f4.6.o -o lista4.6

lista4.6.o: lista4.6.c
	gcc -c lista4.6.c

f4.6.o:  f4.6.c
	gcc -c f4.6.c

clean:
	rm -rf lista4.6 *.o
