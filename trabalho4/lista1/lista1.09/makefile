all: lista1.09

lista1.09: bubble_sort.o lista1.09.o
	gcc bubble_sort.o lista1.09.o -o lista1.09

bubble_sort.o: bubble_sort.c
	gcc -c bubble_sort.c

lista1.09.o: lista1.09.c
	gcc -c lista1.09.c

clean:
	rm -rf *.o

mrproper: clean
	rm -rf lista1.09	
