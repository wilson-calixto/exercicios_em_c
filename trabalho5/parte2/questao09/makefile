all: incremento

incremento: soma.o q09.o
	gcc soma.o q09.o -o incremento

q09.o: q09.c
	gcc -c q09.c

soma.o: soma.c
	gcc -c soma.c

clean:
	rm -rf *.o

mrproper: clean
	rm -rf incremento
