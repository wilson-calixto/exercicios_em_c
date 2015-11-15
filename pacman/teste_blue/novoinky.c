#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define L 23
#define C 30
#define LL 21
#define LC 28
#define UP 1
#define RIGHT 2
#define DOWN 3
#define LEFT 4
#define LINHA 0
#define COLUNA 1

/*void *operacao_dist(int pacman[3] , int dir[2], int x, int y)
{
	int linha, coluna;

	linha = pacman[0];
	coluna = pacman[1] + 2;
	dir[0] = linha;
	dir[1] = coluna;
	
	printf("%d %d \n\n", dir[0], dir[1]);
}
*/

void dist (int pacman[3])
{
	int posicao_pacman;
	posicao_pacman = pacman[2];
	
	//dir = malloc(sizeof(int) * 2);
	
	if (posicao_pacman == UP)
	{
		pacman[0] = pacman[0]-2;
	} //operacao_dist(pacman, dir, -2, 0);

	if (posicao_pacman == RIGHT) //operacao_dist(pacman, dir,  0, 2);
	{
		pacman[1] = pacman[1]+2;
	}	
	if (posicao_pacman == DOWN) //operacao_dist(pacman, dir, 2, 0);
	{
		pacman[0] = pacman[0]+2;
	}	
	if (posicao_pacman == LEFT) //operacao_dist(pacman, dir, 0, -2);
       {
       	pacman[1] = pacman[1]-2;
       }
	//return dir;
}


void verifica_target(int target[2], char maze[23][30])
{
        if (target[LINHA]>22)
        {
               target[LINHA]=22;
        }
        if (target[COLUNA]>29)
        {
               target[COLUNA]=29;
        }
        if (target[LINHA]<1)
        {
        	target[LINHA]=1;
        }
        if (target[COLUNA]<1)
        {
        	target[COLUNA]=1;
        }
        
}        

void print_maze(char maze[23][30]) 
{   	
	int i, j;
	for (i=0; i<23; i++)
        {
              	for (j=0; j<30; j++)
            	{
                	printf("%c", maze[i][j]);	
	        }
	        printf("\n");
    }
    printf("\n");
}

void marca_target(char maze[23][30], int target[2])
{
        maze[target[LINHA]][target[COLUNA]]='T';
}

void marca_ghost(char maze[23][30], int ghost[3])
{
        maze[ghost[LINHA]][ghost[COLUNA]]='B';
}

void marca_red(char maze[23][30], int red[3])
{
        maze[red[LINHA]][red[COLUNA]]='R';
}

void marca_pacman(char maze[23][30], int pacman[3])
{
	maze[pacman[LINHA]][pacman[COLUNA]]='P';
}

void zera_vetor(int vet[4])
{
        int i;
        for (i=0;i<4;i++)
        {
                vet[i]=1000;
        }
}

void anda(int ghost[3], char maze[23][30], int target[2])
{
        int dist[4], i=0, j=0, menor=0, vet[8];
        while(maze[ghost[LINHA]][ghost[COLUNA]+1]!='T' || maze[ghost[LINHA]][ghost[COLUNA]-1]!='T' || maze[ghost[LINHA]+1][ghost[COLUNA]]!='T' || maze[ghost[LINHA]-1][ghost[COLUNA]]!='T')
        {
        	if (maze[ghost[LINHA]][ghost[COLUNA]+1]!='7' || maze[ghost[LINHA]][ghost[COLUNA]-1]!='7' || maze[ghost[LINHA]+1][ghost[COLUNA]]!='7' || maze[ghost[LINHA]-1][ghost[COLUNA]]!='7')
        	{
                        if (maze[ghost[LINHA]-1][ghost[COLUNA]]!='0' && maze[ghost[LINHA]-1][ghost[COLUNA]]!='B')
                        {
                                ghost[LINHA]--;
                                marca_ghost(maze, ghost);
                                print_maze(maze);         
                        
                        }
                        else if (maze[ghost[LINHA]][ghost[COLUNA]-1]!='0' && maze[ghost[LINHA]][ghost[COLUNA]-1]!='B')
                        {
                                ghost[COLUNA]--;
                                marca_ghost(maze, ghost);
                                print_maze(maze);
                        }
                        else if (maze[ghost[LINHA]+1][ghost[COLUNA]]!='0' && maze[ghost[LINHA]+1][ghost[COLUNA]]!='B')
                        {
                                ghost[LINHA]++;        
                                marca_ghost(maze, ghost);
                                print_maze(maze);
                        }
                        else if (maze[ghost[LINHA]][ghost[COLUNA]+1]!='0' && maze[ghost[LINHA]][ghost[COLUNA]+1]!='B')
                        {
                                ghost[COLUNA]++;
                                marca_ghost(maze, ghost);
                                print_maze(maze);
                        }
                }else if (maze[ghost[LINHA]][ghost[COLUNA]+1]=='7' || (maze[ghost[LINHA]][ghost[COLUNA]-1]=='7') || (maze[ghost[LINHA]+1][ghost[COLUNA]]=='7') || (maze[ghost[LINHA]-1][ghost[COLUNA]]=='7'))       
                {
                	vet[0]=ghost[LINHA];
                     vet[1]=ghost[COLUNA]+2;
                        
                     vet[2]=ghost[LINHA];
                     vet[3]=ghost[COLUNA]-2;
                
                     vet[4]=ghost[LINHA]+2;
                     vet[5]=ghost[COLUNA];        
                        
                     vet[6]=ghost[LINHA]-2;
                     vet[7]=ghost[COLUNA];
                        
                     zera_vetor(dist);
                	if (maze[vet[0]][vet[1]]!='0')
                	{
                     	dist[0]=sqrt(pow((vet[LINHA]-target[LINHA]), 2)+pow((vet[COLUNA]-target[COLUNA]), 2));
                	}
                	else if (maze[vet[2]][vet[3]]!='0')
                	{
              	       dist[1]=sqrt(pow((vet[2]-target[LINHA]),2)+pow((vet[3]-target[COLUNA]),2));
                	}	        
                	else if (maze[vet[4]][vet[5]]!='0')
                	{
                            dist[2]=sqrt(pow((vet[4]-target[LINHA]),2) + pow((vet[5]-target[COLUNA]),2));
                	}
                	else if (maze[vet[6]][vet[7]]!='0')
               	{
                            dist[3]=sqrt(pow((vet[6]-target[LINHA]),2) + pow((vet[7]-target[COLUNA]),2));
               	}
                
                	for(i=0;i<4;i++)
                	{
                     	for (j=0;j<4;j++)
                        	{
                            	if (dist[i]<dist[j])
                                	{
                                        menor=dist[i];
                                	}
                                	else if (dist[j]<dist[i])
                                	{
                                        menor=dist[j];
                                	}
                        	}
                	}
                	if (menor==dist[0])
                	{
                        maze[ghost[LINHA]][ghost[COLUNA]+2]='B';
                        print_maze(maze);
                	}
                	else if (menor==dist[1])
                	{
                        maze[ghost[LINHA]][ghost[COLUNA]-2]='B';      
                        print_maze(maze);
                	}
                	else if (menor==dist[2])
                	{
                        maze[ghost[LINHA]+2][ghost[COLUNA]]='B';     
                        print_maze(maze);
                	}
                	else if (menor==dist[3])
                	{
                        maze[ghost[LINHA]-2][ghost[COLUNA]]='B';
                        print_maze(maze);
                	}
                }
        }
}

void clean_matrix(char v[23][30], int m)
{
    int i;

    for ( i = 0; i < m; i++ )
    {
        free(v[i]);
    }
    free (v);
}


void inky(int pacman[3], int red[3], char maze[23][30], int ghost[3])
{

        int target[2];
        target[LINHA]=(pacman[LINHA]-red[LINHA])+pacman[LINHA];
        target[COLUNA]=(pacman[COLUNA]-red[COLUNA])+pacman[COLUNA];
        printf("%d %d\n\n", target[LINHA], target[COLUNA]);
        //printf("%d", target[0]);
        //printf("%d", target[1]);
        //verifica_target(target, maze);
        marca_red(maze, red);
        marca_ghost(maze, ghost);
        marca_target(maze, target);
        print_maze(maze);
        anda(ghost, maze, target);            
}

int main (int argc, const char *argv[])
{
        char maze[L][C]={{'0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0'},
                    {'0',' ',' ',' ',' ',' ','7',' ',' ',' ',' ',' ',' ',' ','0',' ',' ',' ',' ',' ',' ',' ','7',' ',' ',' ',' ',' ',' ','0'},
                    {'0',' ','0','0','0','0',' ','0','0','0','0','0','0',' ','0',' ','0','0','0','0','0','0',' ','0','0','0','0','0',' ','0'},
                    {'0',' ','0','0','0','0',' ','0','0','0','0','0','0',' ','0',' ','0','0','0','0','0','0',' ','0','0','0','0','0',' ','0'},
                    {'0','7',' ',' ',' ',' ','7',' ',' ',' ',' ',' ',' ','7',' ','7',' ',' ',' ',' ',' ',' ','7',' ',' ',' ',' ',' ','7','0'},
                    {'0',' ','0','0','0','0',' ','0',' ','0','0','0','0','0','0','0','0','0','0','0',' ','0',' ','0','0','0','0','0',' ','0'},
                    {'0',' ',' ',' ',' ',' ','7','0',' ',' ',' ',' ',' ',' ','0',' ',' ',' ',' ',' ',' ','0','7',' ',' ',' ',' ',' ',' ','0'},
                    {'0',' ','0','0','0','0',' ','0','0','0','0','0','0',' ','0',' ','0','0','0','0','0','0',' ','0','0','0','0','0',' ','0'},
                    {'0',' ','0','0','0','0',' ','0',' ',' ',' ',' ',' ','6',' ','6',' ',' ',' ',' ',' ','0',' ','0','0','0','0','0',' ','0'},
                    {'0',' ','0','0','0','0',' ','0',' ','0','0','0','0','0','0','0','0','0','0','0',' ','0',' ','0','0','0','0','0',' ','0'},
                    {'0',' ','0','0','0','0',' ',' ','7','0','0','0','0','0','0','0','0','0','0','0','7',' ',' ','0','0','0','0','0',' ','0'},
                    {'0',' ','0','0','0','0',' ','0',' ','0','0','0','0','0','0','0','0','0','0','0',' ','0',' ','0','0','0','0','0',' ','0'},
                    {'0',' ','0','0','0','0',' ','0',' ','0','0','0','0','0','0','0','0','0','0','0',' ','0',' ','0','0','0','0','0',' ','0'},
                    {'0',' ','0','0','0','0',' ','0','7',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','7','0',' ','0','0','0','0','0',' ','0'},
                    {'0',' ','0','0','0','0',' ','0',' ','0','0','0','0','0','0','0','0','0','0','0',' ','0',' ','0','0','0','0','0',' ','0'},
                    {'0',' ',' ',' ',' ',' ','7',' ','7',' ',' ',' ',' ',' ','0',' ',' ',' ',' ',' ','7',' ','7',' ',' ',' ',' ',' ',' ','0'},
                    {'0',' ','0','0','0','0',' ','0','0','0','0','0','0',' ','0',' ','0','0','0','0','0','0',' ','0','0','0','0','0',' ','0'},
                    {'0','7',' ',' ',' ',' ','7',' ','7',' ',' ',' ',' ','6',' ','6',' ',' ',' ',' ','7',' ','7','0',' ',' ',' ',' ','7','0'},
                    {'0',' ','0','0','0','0',' ','0',' ','0','0','0','0','0','0','0','0','0','0','0',' ','0',' ','0',' ','0','0','0',' ','0'},
                    {'0','7',' ',' ',' ',' ',' ','0',' ',' ',' ',' ',' ',' ','0',' ',' ',' ',' ',' ',' ','0',' ',' ','7',' ',' ',' ','7','0'},
                    {'0',' ','0','0','0','0','0','0','0','0','0','0','0',' ','0',' ','0','0','0','0','0','0','0','0','0','0','0','0',' ','0'},
                    {'0',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','7',' ','7',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','0'},
                    {'0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0'}};
        int red[3], pacman[3], ghost[3];
        //dis=malloc(sizeof(int) * 2);
        red[0]=2;
        red[1]=6;
        red[2]=RIGHT;
        pacman[0]=4;  
        pacman[1]=7;
        pacman[2]=RIGHT;
        ghost[0]=1;
        ghost[1]=1;
        ghost[2]=RIGHT;
        marca_pacman(maze, pacman);
        dist(pacman);
        inky(pacman, red, maze, ghost);
        //clean_matrix(maze, 23);
        return 0;
}
