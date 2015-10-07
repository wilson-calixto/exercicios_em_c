all: q08

q08: soma.o q08.o
	gcc soma.o q08.o -o q08

q08.o: q08.c
	gcc -c q08.c

soma.o: soma.c
	gcc -c soma.c

clean:
	rm -rf *.o

mrproper: clean
	rm -rf q08
