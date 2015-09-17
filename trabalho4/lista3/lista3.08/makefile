all: lista3.08

lista3.08: comb.o lista3.08.o util.o	
	gcc comb.o lista3.08.o util.o -o lista3.08

comb.o: comb.c
	gcc -c comb.c
lista3.08.o: lista3.08.c
	gcc -c lista3.08.c
util.o: ../../util.c/util.c
	gcc -c ../../util.c/util.c

clean:
	rm -rf *.o
mrproper: clean 
	rm -rf lista3.08
