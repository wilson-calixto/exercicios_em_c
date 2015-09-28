all: lista4.07

lista4.07: ex4q7.o ex4q7f.o
	gcc ex4q7.o ex4q7f.o -o lista4.07

ex4q7.o: ex4q7.c
	gcc -c ex4q7.c

ex4q7f.o: ex4q7f.c
	gcc -c ex4q7f.c

clean:
	rm -rf *.o

mrproper:
	rm -rf lista4.07
