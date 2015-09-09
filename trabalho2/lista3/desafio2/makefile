all: lista3desafio2

lista3desafio2: util.o lista3desafio2.o
	gcc lista3desafio2.o util.o -o lista3desafio2

lista3desafio2.o: lista3desafio2.c
	gcc -c lista3desafio2.c

util.o: ../../util.c/util.c
	gcc -c ../../util.c/util.c

clean:
	rm -rf *.o

mrproper: clean
	rm -rf lista3desafio2
