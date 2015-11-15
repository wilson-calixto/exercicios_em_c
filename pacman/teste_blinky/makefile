all: rm  main

main: main_teste.o maze.o validate_position.o clear_screen.o move.o  walking.o change_path.o score.o 
	gcc main_teste.o maze.o validate_position.o clear_screen.o move.o walking.o change_path.o  score.o   -o main -lm

main_teste.o: main_teste.c
	gcc -c main_teste.c -g

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

def_target_pink.o: def_target_pink.c
	gcc -c def_target_pink.c -g
def_target_pink.o: def_target_blinky.c
	gcc -c def_target_blinky.c -g

clear:
	rm -rf *.o

rm:	clear
	rm -rf main
