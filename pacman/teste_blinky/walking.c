//Em construção!!!
//
//
//Parametros da funcção:
//maze[][] = este é o vetor de inteiros do labirinto, repare no modelo contido neste diretorio "maze.txt"
//ghost[]  = este eh o vetor correspondente ao ghost onde:
//             ghost[0] = Linha no maze
//             ghost[1] = Coluna no maze
//             ghost[2] = Direcao do ghost
//target[] = este é o alvo que o ghost tentará alcançar. onde:
//		target[0] = Linha no maze
//		target[1] = Coluna no maze
//		
//Repare que as direções correspondem aos numeros
//          Down = 1
//          Right = 2
//          UP   = 3
//	    Left = 4
// 
// Equipe:   Benjamin Borges
// 	     Evandro 
//	     Wilson C. 
// 	     
//
//
//
//

#include"validate_position.h"
#include"change_path.h"


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
			if (maze[y][x] != '7' &&  maze[y][x] != '5')
			{
				maze[y][x]  = '3'; 
			}else
			{
				if (maze[y][x] != '5')
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
