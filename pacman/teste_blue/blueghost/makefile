all: rm  inky

inky: inky.o maze.o validate_position.o clear_screen.o move.o  walking.o change_path.o score.o dist.o calcula_target.o
	gcc inky.o maze.o validate_position.o clear_screen.o move.o walking.o change_path.o  score.o dist.o calcula_target.o  -o inky -lm

inky.o: inky.c
	gcc -c inky.c -g

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
	
calcula_target.o: calcula_target.c
	gcc -c calcula_target.c -g


dist.o: dist.c
	gcc -c dist.c -g 

#def_target.o: def_target.c
#	gcc -c def_target.c -g 

#def_target_pink.o: def_target_pink.c
#	gcc -c def_target_pink.c -g

clear:
	rm -rf *.o

rm:	clear
	rm -rf inky
