/*

#include <stdio.h>
#include "maze.h"
#include "move.h"
#include "math.h"
#define BLINK 1
#define PINK 2
#define INKY 3
#define CLYDE 4
#define C 30
#define L 23


// Este MAIN foi criado para testar a função walking

		/* ----------  end of function main  ---------- 
int main (int argc, char *argv[])
{
  int ghost[3],pacman[3],target[2], number_ghost=0;
  char maze[L][C];
  char ch,path[20] = "maze.txt";
  int i=0,j=0;
  while (number_ghost != 9)
  {
  	//clear_screen();
	load_maze(maze,path);
  	//print_maze(maze);
  	printf ( "\t>>> GHOSTS <<<\n" );
  	printf ( "1.BLINK  2.PINK  3.INKY  4.CLYDE  9.SAIR   \n" );
  	do
  	{  	  
  	  printf ( "Qual o numero do Ghost? = " );
          scanf ("%d", &number_ghost);
  	}while(number_ghost > 4 || number_ghost < 1 || number_ghost == 9  );  
  
  //Lendo cordenadas para o ghost 
  	if (number_ghost != 9)
  	{
		
  		print_maze(maze);
  		read_player(maze,ghost,'3'); 
  		read_player(maze,pacman,'5');
	        switch (number_ghost)
		{
			case 1:
				blinky(pacman,target);
				position(maze,pacman,'8');
				break;
			case 2:
				pink(maze,ghost,pacman,target);
				position(maze,target,'8');
				break;
			case 3:
				inky(pacman,target);
				position(maze,target,'8');
				break;
			case 4:
			//	target = clyde(ghost,pacman);
			//	position(maze,target,'8');
		        	break;

		}	
 	 	
		walking(maze,ghost,target);//mudar os parametros
  		print_maze (maze);
  	}
  }
  return 0;
}
*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int jogada_valida(int vetor_posicao[50], int jogada) //recebe o vetor de jogadas realizadas e a jogada que se deseja fazer
{
   int i;
   for(i = 0; i < 50; i++) // percorre o vetor
   {
       if (jogada == vetor_posicao[i]) // se a jogada existir no vetor, ou seja, ja foi realizada retorna 0, valor para false.
       {
           return 0;
       }
    }
    return 1; //  se a jogada não existir ele retorna 1, valor para true
}


void cria(const char argv[])
{
	FILE *fin;
	fin=fopen(argv,"r");
	
	if(fin==NULL)
	{
		printf("error");
	}
	else
	{	
		int i,j,indices[50],posicao,palavra_rand;
		char **matriz;
		/*inicia a matriz*/
	    matriz=(char**)malloc(25*sizeof(char*));  
	    for ( i=0;i<25;i++)
	    {
	        matriz[i]=(char*)malloc(50*sizeof(char));
	    }
		           
		   //recebe os dados do arquivo 
			 for(i=0;i<25;i++)
	        {
	            fgets(**matriz[i],50,fin);
	            // fgets((*p).cod,TAM,fin);
	        }
		
			
		//mostra as strings 
				for(i=0;i<25;i++)
	        {
	            printf("%s",matriz[i][50]);
	        }
		
		//mostra 24 strings aleatorias
			for(j=0;j<24;j++)
	        {
		
				palavra_rand=1 + ( rand() % 23 );
				//tirar palavras repetida com novo vetor
				for(i=0;i<50;i++)
		        {
		        	posicao=1 + ( rand() % 48 );
		            //mostra a string de forma embaralhada
		            //guaradar o indice q ja saiou em um vetor e perguntar se esse indice ja saiu se nao print else gerre outro numeor
					if(jogada_valida(indices,posicao) )
					{
						printf("%c",matriz[palavra_rand][posicao]);					
						indices[i]=posicao;	
					}
					else
					{
							i--;
					}
							            
		        }
				printf("\n");
			}
	}



}



int main(int argc, const char *argv[] )
{
		char file[50];	
		puts("Informe o nome do arquivo:");
        scanf("%s", file);
    	cria(file);
	
	return 0;
}
