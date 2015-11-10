all: main

main: main.o maze.o validate_position.o clear_screen.o move.o  walking.o 
	gcc main.o maze.o validate_position.o clear_screen.o move.o walking.o  -o main

main.o: main.c
	gcc -c main.c -g

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

clea:
	rm -rf *.o

mrproper:
	rm -rf main
