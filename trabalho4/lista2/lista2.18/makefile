all: lista2.18

lista2.18: lista2.18.o p.o
	gcc lista2.18.o p.o -o lista2.18

lista2.18.o: lista2.18.c
	gcc -c lista2.18.c

p.o: p.c
	gcc -c p.c

clean:
	rm -rf *.o

mrproper: clear
	rm -rf lista2.18
