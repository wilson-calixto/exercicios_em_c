all:lista3.04

lista3.04: tt.o lista3.04.o
	gcc tt.o lista3.04.o -o lista3.04

tt.o: tt.c
	gcc -c tt.c

lista3.04.o: lista3.04.c
	gcc -c lista3.04.c

clean:
	rm -rf *.o

mrproper: clean
	rm -rf lista3.04
