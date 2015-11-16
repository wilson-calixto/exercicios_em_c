#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define BLINK 1
#define PINK 2
#define INKY 3
#define CLYDE 4
#define C 30
#define L 23

#ifdef WIN32
  #define CLEARSCR system ( "cls" )
#else
  #define CLEARSCR system ( "clear" )
#endif

void clear_screen()
{
    CLEARSCR;
}

int validate_position(char maze[L][C], int linha, int coluna)
{
  if (maze[linha][coluna]== ' '  || maze[linha][coluna] == '5' || maze[linha][coluna] == '7' || maze[linha][coluna] == '6' || maze[linha][coluna] == '8'  )
  {
    return 1;
  }
  else
  {
    return 0;
  }

}

void print_maze (char maze[L][C])
{
  int i, j,k;
  printf("   ");
  for (i=0; i<C; i++)
  {
	if (i < 10)
	{
	  printf(" %d ", i);
	}else
	{
	  printf("%d ", i);
	}
  }
  printf("\n");
  k = 0;
  for ( i = 0; i < L; i++ )
  {
   	if (k < 10)
	{
	  printf("%d  ", k++);
	}else
	{
	  printf("%d ", k++);
	}


    for ( j = 0; j < C; j++ )
    {
      switch (maze[i][j])
      {
	      case '0':
		      printf("[X]");
		      break;
	      case '7':
		      printf("   ");
      		      break;
	      case '6':
		      printf("   ");
		      break;
	      case '3':
		      printf(" G "); 
		      break;
	      case '4':
	      	      printf(" R ");
	      	      break;
	      case '5':
		      printf(" P "); 
		      break;
	      case '8':
	      	      printf(" T ");
	      	      break;

	      case ' ':
		      printf("   ");
		      break;
      }

    }
    printf ( "\n" );
  }
//    printf ( "\n" );
//    printf ( "\n" );
//for ( i = 0; i < L; i++ )
//  {
//    for ( j = 0; j < C; j++ )
//    {
//     printf("%c", maze[i][j] ); 
//    }
//    printf ( "\n" );
//  }
}

/* Função para definir as posições e direção iniciais do fantasma
 * e do pacman */

void position(char maze[L][C], int numbers_player[3], char player)
{
  int i,j;       
  i=numbers_player[0];
  j=numbers_player[1];
  maze[i][j]= player;
}

float score(int changes[3], int y_target,int x_target )
{
	float resultado = sqrt( pow(changes[1]-x_target,2) + pow(changes[0] - y_target,2));
          
	return resultado; 
}


void change_path(char maze[23][30],int ghost[3], int target[2])
{
	int changes[4][3];
	int i=1,j=0,x,y,menor_indice;
	float menor_score,score_aux;
	y = ghost[0];	
	x = ghost[1];
	ghost[2] = 3;									// Começa a verificar na prioridade em  cima , esquerda, abaixo, direita ;	
	while (i<=4)	
	{
		switch (ghost[2])
		{
			case 1:
				y = y+1;
				i++;
				break;

			case 2:
				x = x+1;
				i++;
				break;

			case 3:
				y = y-1;
				i++;
				break;

			case 4:
				x = x-1;
				i++;
				break;

		}
		if (validate_position(maze,y,x))
		{
			changes[j][0] = y;
			changes[j][1] = x;
			changes[j][2] = ghost[2];
			j++;
		}
			
		x = ghost[1];
		y = ghost[0];
		ghost[2] = ghost[2]+1;
		if (ghost[2] > 4)
		{
			ghost[2] = 1;
		}
		
	}
//escolhe o menor indice;	
	menor_indice = 0;
	menor_score  = score(changes[0], target[0], target[1]);
	for (i=1;i<j;i++)
	{
		score_aux = score(changes[i],target[0],target[1]); 
		if (score_aux < menor_score)
		{
			menor_score = score_aux;
			menor_indice = i;
		}
	}
	
	ghost[0] = changes[menor_indice][0];
	ghost[1] = changes[menor_indice][1];
	ghost[2] = changes[menor_indice][2];

}				/* ----------  end of function main  ---------- */


void dist (int pacman[3])
{
	int posicao_pacman;
	posicao_pacman = pacman[2];
	
	//dir = malloc(sizeof(int) * 2);
	
	if (posicao_pacman == 1 )
	{
		pacman[0] = pacman[0]-2;
	} //operacao_dist(pacman, dir, -2, 0);

	if (posicao_pacman == 2) //operacao_dist(pacman, dir,  0, 2);
	{
		pacman[1] = pacman[1]+2;
	}	
	if (posicao_pacman == 3) //operacao_dist(pacman, dir, 2, 0);
	{
		pacman[0] = pacman[0]+2;
	}	
	if (posicao_pacman == 4) //operacao_dist(pacman, dir, 0, -2);
       {
       	pacman[1] = pacman[1]-2;
       }
	//return dir;
}



void walking(char maze[23][30], int ghost[3], int target[2])
{
	int x,y; 
	y =  ghost[0];
	x =  ghost[1]; 


	while (target[0] != ghost[0] || target[1] != ghost[1] )
	{
		switch (ghost[2])
		{
			case 1:
				y = y+1;
				break;
			case 2:
				x = x+1;
				break;
			case 3:
				y = y-1;
				break;
			case 4:
				x = x-1;
				break;	
		}
		if (validate_position(maze, y, x))
		{
			ghost[0] = y;      
			ghost[1] = x;
			if (maze[y][x] != '7' &&  maze[y][x] != '8')
			{
				maze[y][x]  = '3'; 
			}else
			{
				if (maze[y][x] != '8')
				{
					change_path(maze,ghost,target); 
	//neste momenro o ghost será atualizado com o melhor caminho da bifurcação
				}
			}
		}else
		{
			x = ghost[1];
			y = ghost[0];
			ghost[2] += 1;
			if (ghost[2] > 4)
			{
				ghost[2] = 1;
			}
		}
	}

}




// Este MAIN foi criado para testar a função walking

		/* ----------  end of function main  ---------- */

int main (int argc, char *argv[])
{
  int ghost[3],pacman[3], red[3], target[2], number_ghost;
  char maze[L][C];
  char ch;
  int i=0,j=0;
  FILE *fp;
  fp = fopen("maze.txt","r" );
  if(fp == NULL)
	printf("Erro, nao foi possivel abrir o arquivo\n");
  else
	while( (ch=fgetc(fp))!= EOF )
	{
		if (ch != '\n')
		{
			maze[i][j] = ch;
			j++;
		}else
		{
			j = 0;
			i++;
		}
	}		
  fclose(fp);
	
  clear_screen();
  print_maze(maze);
 
  printf ( "\t>>> GHOSTS <<<\n" );
  printf ( "1.BLINK  2.PINK  3.INKY  4.CLYDE\n" );
  do
  {  	  
  	  printf ( "Qual o numero do Ghost? = " );
          scanf ("%d", &number_ghost);
  }while(number_ghost > 4 || number_ghost < 1 );  
  //number_ghost = 2;
  do
  {
  	print_maze(maze);
	printf ( "Qual a posição do GHOST? (x,y)\n" );
  	printf ( "x: " );
  	scanf ( "%d", &ghost[1] ); // referente a coluna - ghost
  	printf ( "y: " );
  	scanf ( "%d", &ghost[0] ); // referente a linha - ghost
	printf ( "Direção do ghost = 1-Down , 2-Right, 3-Up, 4-Left = " );
        scanf ("%d", &ghost[2]);
	clear_screen();
  }while (!validate_position(maze,ghost[0],ghost[1]) || ghost[2] > 4 ||ghost[2] < 1);                                           //mudar os parametros
	position (maze,ghost,'3');
    
    
   do
  {
  	print_maze(maze);
	printf ( "Qual a posição do RED? (x,y)\n" );
  	printf ( "x: " );
  	scanf ( "%d", &red[1] ); // referente a coluna - ghost
  	printf ( "y: " );
  	scanf ( "%d", &red[0] ); // referente a linha - ghost
	printf ( "Direção do red = 1-Down , 2-Right, 3-Up, 4-Left = " );
        scanf ("%d", &red[2]);
	clear_screen();
  }while (!validate_position(maze,red[0],red[1]) || red[2] > 4 ||red[2] < 1);                                           //mudar os parametros
	position (maze,red,'4');
    
    
  do 
  {
	clear_screen();
  	print_maze (maze);
  	printf ( "Qual a posição do Pacman? (x,y)\n" );
  	printf ( "x: " );
  	scanf ( "%d", &pacman[1]); // referente a coluna - ghost
  	printf ( "y: " );
  	scanf ( "%d", &pacman[0]); // referente a linha - ghost
  }while (!validate_position(maze,pacman[0],pacman[1]));                          //mudar os parametros
  
  do
  {  	
        printf ( "Direção do Pac-mam: 1-Down , 2-Right, 3-Up, 4-Left =  " );
        scanf ("%d",&pacman[2]);
  }while( pacman[2]>4 ||pacman[2]<1);
  position (maze,pacman,'5' );//mudar os parametros
  
  dist(pacman);
  //marca_target aqui// calcular o target aqui e passa-lo para a walking
  target[0]=(pacman[0]-red[0])+pacman[0];
  target[1]=(pacman[1]-red[1])+pacman[1];
  position(maze, target, '8');
  print_maze (maze);
  walking(maze,ghost,target);//mudar os parametros
  print_maze (maze);
  
  return 0;
}
