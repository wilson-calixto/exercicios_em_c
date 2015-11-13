all: main

main: main.o maze.o validate_position.o clear_screen.o move.o def_target_pink.o verifica_direcao.o compara_score.o busca_vetor.o i_o.o partvariavel.o partghost.o partpackman.o
	gcc main.o maze.o validate_position.o clear_screen.o move.o def_target_pink.o verifica_direcao.o compara_score.o busca_vetor.o i_o.o partvariavel.o partghost.o partpackman.o -o main

main.o: main.c
	gcc -c main.c

maze.o: maze.c
	gcc -c maze.c

validate_position.o: validate_position.c
	gcc -c validate_position.c

clear_screen.o: clear_screen.c
	gcc -c clear_screen.c

move.o: move.c
	gcc -c move.c

def_target_pink.o: def_target_pink.c
	gcc -c def_target_pink.c
	
partvariavel.o: partvariavel.c
	gcc -c partvariavel.c



partghost.o: partghost.c
	gcc -c partghost.c

partpackman.o: partpackman.c
	gcc -c partpackman.c


maze.o: i_o.c
	gcc -c i_o.c

clear :
	rm -rf *.o

mrproper:
	rm -rf main
