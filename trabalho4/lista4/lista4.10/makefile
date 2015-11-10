all: lista4.10

lista4.10: lista4.10.o derivada.o
	gcc lista4.10.o derivada.o -lm -o lista4.10

lista4.10.o: lista4.10.c
	gcc -c lista4.10.c

derivada.o: derivada.c
	gcc -c derivada.c

clean:
	rm -rf *.o

mrproper:	clean
	rm -rf Polinomio
