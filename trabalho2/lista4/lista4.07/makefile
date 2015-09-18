all: lista4.7

lista4.7: func.lista4.7.o lista4.7.o
	gcc func.lista4.7.o lista4.7.o -o lista4.7
func.lista4.7.o: func.lista4.7.c
	gcc -c func.lista4.7.c
lista4.7.o: lista4.7.c
	gcc -c lista4.7.c
clean:	
	rm -rf lista4.7 *.o
