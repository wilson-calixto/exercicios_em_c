all: main
/*wilson calisto: falta concertar o erro do maze.o que nao funciona e ler a matriz do txt */
main: main.o maze.o validate_position.o clear_screen.o move.o def_target_pink.o i_o.o partvariavel.o partghost.o partpackman.o
	gcc main.o maze.o validate_position.o clear_screen.o move.o def_target_pink.o i_o.o partvariavel.o partghost.o partpackman.o -o main

main.o: main.c
	gcc -c main.c

maze.o: pink/maze.c
	gcc -c pink/maze.c

validate_position.o: pink/validate_position.c
	gcc -c pink/validate_position.c

clear_screen.o: pink/clear_screen.c
	gcc -c pink/clear_screen.c

move.o: pink/move.c
	gcc -c pink/move.c

def_target_pink.o: pink/def_target_pink.c
	gcc -c pink/def_target_pink.c
	
partvariavel.o: pink/partvariavel.c
	gcc -c pink/partvariavel.c



partghost.o: pink/partghost.c
	gcc -c pink/partghost.c

partpackman.o: pink/partpackman.c
	gcc -c pink/partpackman.c


i_o.o: pink/i_o.c
	gcc -c pink/i_o.c

clear :
	rm -rf *.o

mrproper:
	rm -rf main
