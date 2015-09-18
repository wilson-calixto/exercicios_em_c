all: lista3.07 

lista3.02 : lista3.07.o util.o
	gcc lista3.07.o util.o -o lista3.07

lista3.02.o: lista3.07.c
	gcc -o lista3.07.o -c lista3.07.c
	
util.o: ../../util.c/util.c
	gcc -c ../../util.c/util.c

clean:
	rm -rf *.o

mrproper:
	rm -rf *
