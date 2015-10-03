main:	    lista2.07.o cont_str.o
	gcc lista2.07.o cont_str.o -o lista2.07

lista2.07.o: lista2.07.c
	gcc -c lista2.07.c

cont_str.o:  cont_str.c	cont_str.h
	gcc -c cont_str.c

clean:
	rm *.o
