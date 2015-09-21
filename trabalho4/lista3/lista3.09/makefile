all: lista3.09

lista3.09: lista3.09.o
	gcc lista3.09.o -o lista3.09

lista3.09.o: lista3.09.c
	gcc -c lista3.09.c

clean: 
	rm -rf *.o

mrproper: clean
	rm -rf lista3.09


