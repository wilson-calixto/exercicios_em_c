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
void operacao_dist(int pacman[3], int dir[2], int x, int y)
{
	int linha, coluna;

	linha = pacman[0] + x;
	coluna = pacman[1] + y;
	dir[0] = linha;
	dir[1] = coluna;
}

int* dist (int pacman[3])
{
	int linha, coluna, *dir, posicao_pacman;
	posicao_pacman = pacman[3];
	
	dir = malloc(sizeof(int) * 2);
	
	if (posicao_pacman == UP) operacao_dist(pacman, dir,   0, 2);

	if (posicao_pacman == RIGHT) operacao_dist(pacman, dir,  0, -2);
		
	if (posicao_pacman == DOWN) operacao_dist(pacman, dir, -2, 0);
		
	if (posicao_pacman == LEFT) operacao_dist(pacman, dir,   2, 0);
			
	return 	dir;
}

void verifica_target(int *target, char *maze)
{
        int boo=1;
        while(boo==1)
        {
                if (maze[target[LINHA]][target[COLUNA]]=='0')
                {
                        target[COLUNA]--;                               
                }
                else
                {
                        boo=0;
                }
        }
}        

void print_maze(char maze[L][C]) 
{   	
	int i, j;
	for (i=0; i<L; i++)
        {
              	for (j=0; j<C; j++)
            	{
                	printf("%c", maze[i][j]);	
	        }
	        printf("\n");
    }
    printf("\n");
}

void marca_target(char *maze, int *target)
{
        maze[target[LINHA]][target[COLUNA]]='T';
}

void marca_ghost(char *maze, int *ghost)
{
        maze[ghost[LINHA]][ghost[COLUNA]]='B';
}

void zera_vetor(int *vet)
{
        int i;
        for (i=0;i<4;i++)
        {
                vet[i]=1000;
        }
}

void anda(int *ghost, char *maze, int *target)
{
        int dist[4], i=0, j=0, menor=0;
        char vet[8];
        while(maze[ghost[LINHA]][ghost[COLUNA]+1]=='T' || maze[ghost[LINHA]][ghost[COLUNA]-1]=='T' || maze[ghost[LINHA]+1][ghost[COLUNA]]=='T' || maze[ghost[LINHA]-1][ghost[COLUNA]]=='T')
        {
                while (maze[ghost[LINHA]][ghost[COLUNA]+1]!='7' || (maze[ghost[LINHA]][ghost[COLUNA]-1]!='7' || (maze[ghost[LINHA]+1][ghost[COLUNA]]!='7' || (maze[ghost[LINHA]-1][ghost[COLUNA]]!='7')
        {
                        if (maze[ghost[LINHA]][ghost[COLUNA]+1]!='0')
                        {
                                ghost[COLUNA]++;
                                marca_ghost(maze, ghost);
                        }
                        else if (maze[ghost[LINHA]][ghost[COLUNA]-1]!='0')
                        {
                                ghost[COLUNA]--;
                                marca_ghost(maze, ghost);
                        }
                        else if (maze[ghost[LINHA]+1][ghost[COLUNA]]!='0')
                        {
                                ghost[LINHA]++;        
                                marca_ghost(maze, ghost);
                        }
                        else if (maze[ghost[LINHA]-1][ghost[COLUNA]]!='0')
                        {
                                ghost[COLUNA]--;
                                marca_ghost(maze, ghost);
                        }
                }
                if (maze[ghost[LINHA]][ghost[COLUNA]+1]=='7' || (maze[ghost[LINHA]][ghost[COLUNA]-1]=='7' || (maze[ghost[LINHA]+1][ghost[COLUNA]]=='7' || (maze[ghost[LINHA]-1][ghost[COLUNA]]=='7')       
                {
                        vet[0]=ghost[LINHA];
                        vet[1]=ghost[COLUNA]+2;
                        
                        vet[2]=ghost[LINHA];
                        vet[3]=ghost[COLUNA]-2;
                
                        vet[4]=ghost[LINHA]+2;
                        vet[5]=ghost[COLUNA];        
                        
                        vet[6]=ghost[LINHA]-2;
                        vet[7]=ghost[COLUNA];
                        
                                        
                }
                zera_vetor(dist);
                if (maze[vet[0]][vet[1]]!='0')
                {
                        dist[0]=sqrt((vet[LINHA]-target[LINHA])**2+(vet[COLUNA]-target[COLUNA]**2);
                }
                if (maze[vet[2]][vet[3]]!='0')
                {
                        dist[1]=sqrt((vet[2]-target[LINHA])**2+(vet[3]-target[COLUNA]**2);
                }        
                if (maze[vet[4]][vet[5]]!='0')
                {
                        dist[2]=sqrt((vet[4]-target[LINHA])**2+(vet[5]-target[COLUNA]**2);
                }
                if (maze[vet[6]][vet[7]]!='0')
                {
                        dist[3]=sqrt((vet[6]-target[LINHA])**2+(vet[7]-target[COLUNA]**2);
                }
                
                for(i=0;i<4;i++)
                {
                        for (j=0;j<4;j++)
                        {
                                if (dist[i]<dist[j])
                                {
                                        menor=vet[i];
                                }
                                else if (dist[j]>dist[i])
                                {
                                        menor=vet[j];
                                }
                        }
                }
                if (menor==dist[0])
                {
                        maze[ghost[LINHA]][ghost[COLUNA]+2]='B';
                }
                else if (menor==dist[1])
                {
                        maze[ghost[LINHA]][ghost[COLUNA]-2]='B';      
                }
                else if (menor==dist[2])
                {
                        maze[ghost[LINHA]+2][ghost[COLUNA]]='B';     
                }
                else if (menor==dist[3])
                {
                        maze[ghost[LINHA]-2][ghost[COLUNA]]='B';
                }
                
        }
}
void inky(int *dir, int *red, char *maze)
{

        int target[2], boo=1;
        target[LINHA]=(dir[LINHA]-red[LINHA])+dir[LINHA];
        target[COLUNA]=(dir[COLUNA]-red[COLUNA])+dir[COLUNA];
        verifica_target(target, maze);
        marca_target(maze, target);
        anda(ghost, maze, target);                     
        
}
