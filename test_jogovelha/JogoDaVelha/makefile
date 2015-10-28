all: main

main: main.o jogo_da_velha.o
	gcc main.o jogo_da_velha.o -o main

main.o: main.c
	gcc -c main.c

jogo_da_velha.o: jogo_da_velha.c
	gcc -c jogo_da_velha.c

clean:
	rm -rf *.o

mrproper: clean
	rm -rf main
