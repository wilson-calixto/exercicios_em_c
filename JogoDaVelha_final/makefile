all: main

main: main.o jogo_da_velha.o i_o.o
	gcc main.o jogo_da_velha.o i_o.o -o main

main.o: main.c
	gcc -c main.c

jogo_da_velha.o: jogo_da_velha.c
	gcc -c jogo_da_velha.c

i_o.o: i_o.c
	gcc -c i_o.c

clean:
	rm -rf *.o

mrproper: clean
	rm -rf main
