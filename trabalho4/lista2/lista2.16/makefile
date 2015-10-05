all: lista2.16

lista2.16: lista2.16.o segmento.o
	gcc lista2.16.o segmento.o -o lista2.16

lista2.16.o: lista2.16.c
	gcc -c lista2.16.c

segmento.o: segmento.c
	gcc -c segmento.c

clean:
	rm -rf *.o

mrproper:
	rm -rf lista2.16
