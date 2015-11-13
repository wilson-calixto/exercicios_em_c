#include <stdio.h>
#include "pink/maze.h"
#include "pink/move.h"
#include "pink/i_o.h"
#include "pink/validate_position.h"
#include "pink/def_target_pink.h"

#include "pink/partvariavel.h"
#include "pink/partghost.h"
#include "pink/partpackman.h"

#define BLINK 1
#define PINK 2
#define INKY 3
#define CLYDE 4
#define C 30
#define L 23
#define UP 1
#define RIGHT 2
#define DOWN 3
#define LEFT 4
/* WILSON CALIXTO : FALTA TREANFORMARA MATRIZ EM TXT E CHAMAR A FUNCAO WALKING 
OBS: PREFERI FAZER O VETOR TARGET COMO GLOBAL PARA FACILITAR A FORMA DE DEBUGAR */
int target[2];
int main ( int argc, const char *argv[] )
{
 int ghost[3],pacman[3],ghost_number;
  int caminho[30][2];
  char maze[L][C] = {{'0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0'},
                    {'0',' ',' ',' ',' ',' ','7',' ',' ',' ',' ',' ',' ',' ','0',' ',' ',' ',' ',' ',' ',' ','7',' ',' ',' ',' ',' ',' ','0'},
                    {'0',' ','0','0','0','0',' ','0','0','0','0','0','0',' ','0',' ','0','0','0','0','0','0',' ','0','0','0','0','0',' ','0'},
                    {'0',' ','0','0','0','0',' ','0','0','0','0','0','0',' ','0',' ','0','0','0','0','0','0',' ','0','0','0','0','0',' ','0'},
                    {'0','7',' ',' ',' ',' ','7',' ',' ',' ',' ',' ',' ','7',' ','7',' ',' ',' ',' ',' ',' ','7',' ',' ',' ',' ',' ','7','0'},
                    {'0',' ','0','0','0','0',' ','0',' ','0','0','0','0','0','0','0','0','0','0','0',' ','0',' ','0','0','0','0','0',' ','0'},
                    {'0',' ',' ',' ',' ',' ','7','0',' ',' ',' ',' ',' ',' ','0',' ',' ',' ',' ',' ',' ','0','7',' ',' ',' ',' ',' ',' ','0'},
                    {'0','0','0','0','0','0',' ','0','0','0','0','0','0',' ','0',' ','0','0','0','0','0','0',' ','0','0','0','0','0','0','0'},
                    {'0','0','0','0','0','0',' ','0',' ',' ',' ',' ',' ','6',' ','6',' ',' ',' ',' ',' ','0',' ','0','0','0','0','0','0','0'},
                    {'0','0','0','0','0','0',' ','0',' ','0','0','0','0','0','0','0','0','0','0','0',' ','0',' ','0','0','0','0','0','0','0'},
                    {'0','0','0','0','0','0',' ',' ','7','0','0','0','0','0','0','0','0','0','0','0','7',' ',' ','0','0','0','0','0','0','0'},
                    {'0','0','0','0','0','0',' ','0',' ','0','0','0','0','0','0','0','0','0','0','0',' ','0',' ','0','0','0','0','0','0','0'},
                    {'0','0','0','0','0','0',' ','0',' ','0','0','0','0','0','0','0','0','0','0','0',' ','0',' ','0','0','0','0','0','0','0'},
                    {'0','0','0','0','0','0',' ','0','7',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','7','0',' ','0','0','0','0','0','0','0'},
                    {'0','0','0','0','0','0',' ','0',' ','0','0','0','0','0','0','0','0','0','0','0',' ','0',' ','0','0','0','0','0','0','0'},
                    {'0',' ',' ',' ',' ',' ','7',' ','7',' ',' ',' ',' ',' ','0',' ',' ',' ',' ',' ','7',' ','7',' ',' ',' ',' ',' ',' ','0'},
                    {'0',' ','0','0','0','0',' ','0','0','0','0','0','0',' ','0',' ','0','0','0','0','0','0',' ','0','0','0','0','0',' ','0'},
                    {'0','7',' ',' ',' ',' ','7',' ','7',' ',' ',' ',' ','6',' ','6',' ',' ',' ',' ','7',' ','7','0',' ',' ',' ',' ','7','0'},
                    {'0',' ','0','0','0','0',' ','0',' ','0','0','0','0','0','0','0','0','0','0','0',' ','0',' ','0',' ','0','0','0',' ','0'},
                    {'0','7',' ',' ',' ',' ',' ','0',' ',' ',' ',' ',' ',' ','0',' ',' ',' ',' ',' ',' ','0',' ',' ','7',' ',' ',' ','7','0'},
                    {'0',' ','0','0','0','0','0','0','0','0','0','0','0',' ','0',' ','0','0','0','0','0','0','0','0','0','0','0','0',' ','0'},
                    {'0',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','7',' ','7',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','0'},
                    {'0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0'}};

  out(9,0);//funcao esta funcionando ps trocar as entradas e saidas para o_i menu
  
  print_maze (maze);  
  
  ghost_number=partvariavel(ghost_number);


  partghost(ghost,maze);
  partpackman (pacman,maze);//sendo testada	


 printf("numero:%d\n", ghost_number);
 printf("pacman[0]==%d\n", pacman[0]);
 printf("pacman[1]==%d\n", pacman[1]);
 printf("pacman[2]==%d\n", pacman[2]);
 printf("ghost[0]==%d\n", ghost[0]);
 printf("ghost[1]==%d\n", ghost[1]);
 printf("ghost[2]==%d\n", ghost[2]);  
  position (maze,ghost,'G');
  position (maze,pacman,'P' );//mudar os parametros
 // clear_screen();

 if (ghost_number == BLINK)
  {
	printf("consegui, voce vai rodar o fantasma 1 \n\n");
  }
  else if (ghost_number == PINK)
  {
	printf("consegui, voce vai rodar o fantasma 2 \n\n");
	//out(4,0);//funcao esta funcionando ps trocar as entradas e saidas para o_i 
  	def_target_pink(maze,ghost,pacman,target);//deve retornar um ponteiro
       
  }
  else if (ghost_number == INKY)
  {
	printf("consegui, voce vai rodar o fantasma 3\n\n");
  }
  else if (ghost_number == CLYDE)
  {
	printf("consegui, voce vai rodar o fantasma 4\n\n");
  }
      
  printf ("target i: %d \n",target[0]);
  printf ("target j: %d \n",target[1]);
  
  print_maze (maze);

  
                        
  //walking(maze,ghost,pacman,caminho);
 
  return 0;
}
