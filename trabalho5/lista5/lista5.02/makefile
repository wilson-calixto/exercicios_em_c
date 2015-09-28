all: lista5.02

lista5.02: strparaint.o lista5.02.o
	gcc lista5.02.o strparaint.o -o lista5.02

lista5.02.o: lista5.02.c
	gcc -c lista5.02.c

strparaint.o: strparaint.c
	gcc -c strparaint.c

clean:
	rm -rf *.o

mrproper:
	rm -rf lista5.02


