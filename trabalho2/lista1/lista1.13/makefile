all:lista1.13 

lista1.13: retangulo.o lista1.13.o
	gcc lista1.13.o retangulo.o -o lista1.13
	
lista1.13.o: lista1.13.c
	gcc -c lista1.13.c
	
retangulo.o: retangulo.c util.h
	gcc -c retangulo.c
	
clean:
	rm *.o
