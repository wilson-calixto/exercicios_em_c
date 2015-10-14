all: parte2.09

parte2.09: soma.o parte2.09.o
	gcc soma.o parte2.09.o -o parte2.09

parte2.09.o: parte2.09.c
	gcc -c parte2.09.c

soma.o: soma.c
	gcc -c soma.c

clean:
	rm -rf *.o

mrproper: clean
	rm -rf parte2.09
