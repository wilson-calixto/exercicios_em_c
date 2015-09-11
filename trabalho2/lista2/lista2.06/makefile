all: lista2.6

lista2.6: funcao.o lista2.6.o
	gcc lista2.6.o funcao.o -o lista2.6

lista2.6.o: lista2.6.c
	gcc -c lista2.6.c

funcao.o: funcao.c
	gcc -c funcao.c

clean:
	rm -rf *.o

mrproper: clean
	rm -rf lista2.6