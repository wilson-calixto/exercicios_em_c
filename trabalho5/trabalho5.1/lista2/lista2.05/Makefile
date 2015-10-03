all: lista2.05

lista2.05: palindromo.o lista2.05.o
	gcc palindromo.o lista2.05.o -o lista2.05

palindromo.o: palindromo.c
	gcc -c palindromo.c

lista2.05.o: lista2.05.c
	gcc -c lista2.05.c

clean: 
	rm -rf *.o

mrproper: clean
	rm -rf lista2.05
