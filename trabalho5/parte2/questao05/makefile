all: questao05

questao05: questao05.o funcoes.o
	gcc questao05.o funcoes.o -o questao05

questao05.o: questao05.c
	gcc -c questao05.c

funcoes.o: funcoes.c
	gcc -c funcoes.c

clean:
		rm -rf *.o
mrproper: clean
		rm -rf questao05 
