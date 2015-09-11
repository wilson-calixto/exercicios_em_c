all: desafio1

desafio1: primos.o desafio1.o
	gcc desafio1.o primos.o -o desafio1

desafio1.o: desafio1.c
	gcc -c desafio1.c

primos.o: primos.c
	gcc -c primos.c

clean:
	rm -rf *.o

mrproper: clean
	rm -rf desafio1