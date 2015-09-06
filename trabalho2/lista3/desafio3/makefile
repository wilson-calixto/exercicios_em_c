all: desafio3

desafio3: util.o desafio3.o
	gcc desafio3.o util.o -o desafio3

desafio3.o: desafio3.c
	gcc -c desafio3.c

util.o: ../../util.c/util.c
	gcc -c ../../util.c/util.c

clean:
	rm -rf *.o

mrproper: clean
	rm -rf desafio3
