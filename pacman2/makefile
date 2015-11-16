all: rm  main

main: main.o maze.o validate_position.o clear_screen.o move.o  walking.o change_path.o score.o read_player.o load_maze.o blinky.o clyde.o pink.o inky.o calcula_target.o dist2.o verifica_target.o
	gcc blinky.o clyde.o pink.o inky.o  main.o maze.o validate_position.o clear_screen.o move.o walking.o change_path.o  score.o read_player.o load_maze.o calcula_target.o dist2.o verifica_target.o  -o main -lm

main.o: main.c
	gcc -c main.c -g
load_maze.o: load_maze.c
	gcc -c load_maze.c -g 
read_player.o: read_player.c
	gcc -c read_player.c -g
change_path.o: change_path.c
	gcc -c change_path.c -g
score.o: score.c
	gcc -c score.c -g  
maze.o: maze.c
	gcc -c maze.c -g
walking.o:walking.c
	gcc -c walking.c -g 
calcula_target.o: calcula_target.c
	gcc -c calcula_target.c -g 
validate_position.o: validate_position.c
	gcc -c validate_position.c -g
verifica_target.o: verifica_target.c
	gcc -c verifica_target.c
dist2.o: dist2.c
	gcc -c dist2.c -g 
clear_screen.o: clear_screen.c
	gcc -c clear_screen.c -g 

move.o: move.c
	gcc -c move.c -g 

def_target.o: def_target.c
	gcc -c def_target.c -g 

pink.o: pink.c
	gcc -c pink.c -g
inky.o: inky.c
	gcc -c inky.c -g
blinky.o: blinky.c
	gcc -c blinky.c -g
clyde.o: clyde.c
	gcc -c clyde.c -g

clear:
	rm -rf *.o

rm:	clear
	rm -rf main
