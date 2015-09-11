all:dd

dd:func.lista2-12.o lista2-12.o
	gcc lista2-12.o func.lista2-12.o -o dd
fun.lista2-12.o: func.lista2-12.c
	gcc -c func.lista2-12.c
lista2-12.o: lista2-12.c
	gcc -c lista2-12.c
clean:
	rm -rf dd *.o

