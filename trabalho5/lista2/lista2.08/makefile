all:lista2.08

lista2.08: esp.o lista2.08.o
	gcc esp.o lista2.08.o -o lista2.08

esp.o: esp.c
	gcc -c esp.c

lista2.08.o: lista2.08.c
	gcc -c lista2.08.c

clean:
	rm -rf *.o

mrproper: clean
	rm -rf lista2.08
