main: lista4.08

lista4.08: string_copy.o lista4.08.o
	gcc string_copy.o lista4.08.o -o lista4.08

lista4.08.o: lista4.08.c
	gcc -c lista4.08.c

string_copy.o: string_copy.c
	gcc -c string_copy.c

clean: 
	rm -rf *.o

mrproper: clean
	rm -rf lista4.08


