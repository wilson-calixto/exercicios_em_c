all: lista2.16

lista2.16: funcao.o lista2.16.o
	gcc lista2.16.o funcao.o -o lista2.16

lista2.16.o: lista2.16.c
	gcc -c lista2.16.c

funcao.o: funcao.c
	gcc -c funcao.c

clean:
	rm -rf *.o

mrproper: clean
	rm -rf lista2.16