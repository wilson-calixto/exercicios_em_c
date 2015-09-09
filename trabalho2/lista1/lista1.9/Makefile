all:lista1.9 

lista1.9: reverse_number.o lista1.9.o
	gcc lista1.9.o reverse_number.o -o lista1.9
	
lista1.9.o: lista1.9.c
	gcc -c lista1.9.c
	
reverse_number.o: reverse_number.c util.h
	gcc -c reverse_number.c
	
clean:
	rm *.o
