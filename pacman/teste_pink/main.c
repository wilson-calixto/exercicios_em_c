#include <stdio.h>
#include "maze.h"
#include "move.h"
#include "i_o.h"
#include "validate_position.h"
#include "def_target_pink.h"
#define BLINK 1
#define PINK 2
#define INKY 3
#define CLYDE 4
#define C 30
#define L 23
<<<<<<< HEAD


int main (int argc, char *argv[])
=======
#define UP 1
#define RIGHT 2
#define DOWN 3
#define LEFT 4
/* WILSON CALIXTO : FALTA TREANFORMARA MATRIZ EM TXT E CHAMAR A FUNCAO WALKING 
OBS: PREFERI FAZER O VETOR TARGET COMO GLOBAL PARA FACILITAR A FORMA DE DEBUGAR */
int target[2];
int main ( int argc, const char *argv[] )
>>>>>>> 561cc89ca207af317bce492e1e3a0285750607db
{
 int ghost[3],pacman[3],ghost_number;
  int caminho[30][2];
  int maze[L][C];
  int i,j;
  FILE *fp;
  fp = fopen("maze.txt","r" );
  for (i=0;i<L;i++)
  {
	  for (j=0;j<C;j++)
	  {
		  fscanf(fp, "%d", &maze[i][j]);
	  }
  }
  fclose(fp);
  clear_screen();
 out(9,0);//funcao esta funcionando ps trocar as entradas e saidas para o_i menu
  
  print_maze (maze);  
  do
  {  
	  clear_screen();
	  printf ( "Qual o numero do Ghost? : " );
          scanf ("%d",&ghost_number);
  }while(ghost_number>4 || ghost_number<1);  

  do
  {  	  
<<<<<<< HEAD
  	  printf ( "Qual o numero do Ghost? = " );
          scanf ("%d", &number_ghost);
  }while(number_ghost > 4 || number_ghost < 1 );  
  //number_ghost = 2;
=======
          clear_screen();
          printf ( "Direção do ghost:" );
          scanf ("%d",&ghost[2]);
  }while(ghost[2]>4 ||ghost[2]<1);
  //ghost_number = 2;
>>>>>>> 561cc89ca207af317bce492e1e3a0285750607db
  do
  {
	clear_screen();
  	printf ( "Qual a posição do GHOST? (x,y)\n" );
  	printf ( "x: " );
  	scanf ( "%d", &ghost[0] ); // referente a linha - ghost
  	printf ( "y: " );
<<<<<<< HEAD
  	scanf ( "%d", &ghost[1] ); // referente a linha - ghost
	printf ( "Direção do ghost = 1-Down , 2-Right, 3-Up, 4-Left" );
        scanf ("%d", &ghost[2]);
	clear_screen();
  }while (!validate_position(maze,ghost) || ghost[2] > 4 ||ghost[2] < 1);                                           //mudar os parametros
	position (maze,ghost,3);
    
=======
  	scanf ( "%d", &ghost[1] ); // referente a coluna - ghost
  }while (!validate_position(maze,ghost));
                                           //mudar os parametros
  position (maze,ghost,'G');
  do
  {  	
	clear_screen();
        printf ( "Direção do Pac-mam: " );
        scanf ("%d",&pacman[2]);
  }while( pacman[2]>4 ||pacman[2]<1);

>>>>>>> 561cc89ca207af317bce492e1e3a0285750607db
  do 
  {
	clear_screen();
  	print_maze (maze);
  	printf ( "Qual a posição do Pacman? (x,y)\n" );
  	printf ( "x: " );
  	scanf ( "%d", &pacman[0]); // referente a coluna - ghost
  	printf ( "y: " );
  	scanf ( "%d", &pacman[1]); // referente a linha - ghost
<<<<<<< HEAD
  }while (!validate_position(maze,5));                          //mudar os parametros
  
  do
  {  	
        printf ( "Direção do Pac-mam: " );
        scanf ("%d",&pacman[2]);
  }while( pacman[2]>4 ||pacman[2]<1);
  position (maze,pacman,5 );//mudar os parametros
=======
  }while (!validate_position(maze,pacman));    

  
  position (maze,pacman,'P' );//mudar os parametros
>>>>>>> 561cc89ca207af317bce492e1e3a0285750607db
  clear_screen();

 if (ghost_number == BLINK)
  {
	printf("consegui, voce vai rodar o fantasma 1 \n\n");
  }
  else if (ghost_number == PINK)
  {
	printf("consegui, voce vai rodar o fantasma 2 \n\n");
	out(4,0);//funcao esta funcionando ps trocar as entradas e saidas para o_i 
  	target[2]=def_target_pink(maze,ghost,pacman);//deve retornar um ponteiro
       
  }
  else if (ghost_number == INKY)
  {
	printf("consegui, voce vai rodar o fantasma 3\n\n");
  }
  else if (ghost_number == CLYDE)
  {
	printf("consegui, voce vai rodar o fantasma 4\n\n");
  }
      
  printf ("target i %d\n",target[0]);
  printf ("target j%d\n",target[1]);
  
  print_maze (maze);
<<<<<<< HEAD
  walking(maze,ghost,pacman);//mudar os parametros
  
=======

  
                        
  //walking(maze,ghost,pacman,caminho);
 
>>>>>>> 561cc89ca207af317bce492e1e3a0285750607db
  return 0;
}
