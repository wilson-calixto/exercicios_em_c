all: lista2.15

lista2.15: calc_mean.o lista2.15.o
	gcc lista2.15.o calc_mean.o -o lista2.15

lista2.15.o: lista2.15.c
	gcc -c lista2.15.c

calc_mean.o: calc_mean.c
	gcc -c calc_mean.c

clean:
	rm -rf *.o

mrproper: clean
	rm -rf lista2.15
