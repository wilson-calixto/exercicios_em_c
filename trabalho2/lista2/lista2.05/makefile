all:lista2.05

lista2.05: fu.o lista2.05.o
	gcc fu.o lista2.05.o -o lista2.05

fu.o: fu.c
	gcc -c fu.c

lista2.05.o: lista2.05.c
	gcc -c lista2.05.c

clean:
	rm -rf *.o

mrproper:
	rm -rf lista2.05
