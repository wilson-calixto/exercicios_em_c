#include"validate_position.h"
#include"score.h"



void change_path( char maze[23][30],int ghost[3], int target[2] )
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
