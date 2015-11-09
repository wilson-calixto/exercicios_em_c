#include <stdio.h>
int persegue_alvo(int labirinto[23][30],int x_ghost,int y_ghost,int x_pacman,int y_pacman,int caminho[100][2])
{
		int cordenadas[2],i,j;
       		cordenadas[0] = y_ghost;
                cordenadas[1] = x_ghost;
                while(cordenadas[0] != y_pacman || cordenadas[1] != x_pacman )
                {
                         verifica_direcao(labirinto,cordenadas,caminho,i,x_pacman,y_pacman);
                         caminho[i][0] = cordenadas[0];
                         caminho[i][1] = cordenadas[1];
                         i++;
                }

                for (j=0;j<i;j++)
                {
                        printf("(%d,%d)",caminho[j][0],caminho[j][1]);
                }
		 
		return caminho;

}
