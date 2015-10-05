all: Permutacao

Permutacao: questao02.o Permutacao.o 
	gcc questao02.o Permutacao.o -o Permutacao

questao02.o: questao02.c
	gcc -c questao02.c

Permutacao.o: Permutacao.c
	gcc -c Permutacao.c

clear:
	rm -rf *.o

mrproper: clear
	rm -rf Permutacao
