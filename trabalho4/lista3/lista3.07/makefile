all: lista3.07 

lista3.07 : lista3.07.o magico.o util.o
	gcc lista3.07.o magico.o util.o -o lista3.07

lista3.07.o: lista3.07.c
	gcc -o lista3.07.o -c lista3.07.c
	
magico.o: magico.c
	gcc -c magico.c

util.o: ../../util.c/util.c
	gcc -c ../../util.c/util.c

clean:
	rm -rf *.o

mrproper:
	rm -rf *
