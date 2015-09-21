all: q3.6

q3.6: lista3.6.o funcao.o
	gcc lista3.6.o funcao.o -o q3.6

lista3.6.o: lista3.6.c
	gcc -c lista3.6.c

funcao.o: funcao.c
	gcc -c funcao.c

clean:
	rm -rf q3.6 *.o
