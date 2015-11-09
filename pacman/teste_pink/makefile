all: main

main: main.o maze.o validate_position.o clear_screen.o move.o def_target.o def_target_pink.o persegue_alvo.o verifica_direcao.o compara_score.o busca_vetor.o
	gcc main.o maze.o validate_position.o clear_screen.o move.o def_target.o def_target_pink.o persegue_alvo.o verifica_direcao.o compara_score.o busca_vetor.o  -o main

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

def_target.o: def_target.c
	gcc -c def_target.c

def_target_pink.o: def_target_pink.c
	gcc -c def_target_pink.c

clea:
	rm -rf *.o

mrproper:
	rm -rf main
