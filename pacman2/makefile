all: rm  main

main: main.o maze.o validate_position.o clear_screen.o move.o  walking.o change_path.o score.o read_player.o load_maze.o blinky.o clyde.o pink.o inky.o
	gcc blinky.o clyde.o pink.o inky.o  main.o maze.o validate_position.o clear_screen.o move.o walking.o change_path.o  score.o read_player.o load_maze.o -o main -lm

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

validate_position.o: validate_position.c
	gcc -c validate_position.c -g

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
