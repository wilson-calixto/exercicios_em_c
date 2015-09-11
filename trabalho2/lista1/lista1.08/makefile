############################# Makefile ##########################
all: lista1.8
lista1.8: cont_digit.o lista1.8.o
	gcc lista1.8.o cont_digit.c -o lista1.8
lista1.8.o: lista1.8.c
	gcc -c lista1.8.c
cont_digit.o: cont_digit.c
	gcc -c cont_digit.c
clean:
	rm -rf *.o
mrproper: clean
	rm -rf lista1.8
