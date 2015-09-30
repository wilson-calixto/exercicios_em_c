all: lista2.07

lista2.07: funcao.o lista2.07.o
	gcc funcao.o lista2.07.o -o lista2.07

lista2.07.o: lista2.07.c
	gcc -c lista2.07.c

funca.o: funcao.c 
	gcc -c funcao.c

clean:
	rm -rf *.o

remove: clean
	rm -rf lista2.07.c
