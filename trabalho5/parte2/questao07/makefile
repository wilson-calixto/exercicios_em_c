all: exponenciacao

exponenciacao: q07.o expo.o
	gcc expo.o q07.o -o exponenciacao

expo.o: expo.c
	gcc -c expo.c

q07.o: q07.c
	gcc -c q07.c

clear:
	rm -rf *.o

mrproper:
	rm -rf exponenciacao
