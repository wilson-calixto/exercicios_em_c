all:lista2.05

lista2.05: funcao.o lista2.05.o
	gcc funcao.o lista2.05.o -o lista2.05

funcao.o: funcao.c
	gcc -c funcao.c

lista2.05.o: lista2.05.c
	gcc -c lista2.05.c

clean:
	rm -rf *.o

mrproper:
	rm -rf lista2.05
