all: main

main: main.o jogo_da_velha.o i_o.o bot_easy.o bot_hard.o
	gcc main.o jogo_da_velha.o i_o.o bot_easy.o bot_hard.o -o main

main.o: main.c
	gcc -c main.c

jogo_da_velha.o: jogo_da_velha.c
	gcc -c jogo_da_velha.c

i_o.o: i_o.c
	gcc -c i_o.c
	
bot_easy.o: bot_easy.c
	gcc -c bot_easy.c

bot_hard.o: bot_hard.c
	gcc -c bot_hard.c
clean:
	rm -rf *.o

mrproper: clean
	rm -rf main
