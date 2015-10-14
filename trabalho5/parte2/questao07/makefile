all: parte2.07

parte2.07: parte2.07.o expo.o
	gcc expo.o parte2.07.o -o parte2.07

expo.o: expo.c
	gcc -c expo.c

parte2.07.o: parte2.07.c
	gcc -c parte2.07.c

clear:
	rm -rf *.o

mrproper:
	rm -rf parte2.07
