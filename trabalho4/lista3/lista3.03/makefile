all:lista3.03

lista3.03: funcao.o lista3.03.o
	gcc funcao.o lista3.03.o -o lista3.03

funcao.o: funcao.c
	gcc -c funcao.c

lista3.03.o: lista3.03.c
	gcc -c lista3.03.c

clean:
	rm -rf *.o

mrproper: clean
	rm -rf lista3.03
