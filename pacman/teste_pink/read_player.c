#include <stdio.h>
void read_player(char maze[23][30], int player[3], char controle)
{
 int linha, coluna;
  
	do
	{	
		if (controle == '3')
		{
        		printf ( "Qual a posição do GHOST? (x,y)\n" );
		}else
		{
			printf ("Qual a posicao do pacman (x,y) \n");
		}
	printf ( "x: " );
        scanf ( "%d", &coluna ); // referente a coluna - ghost
        printf ( "y: " );
        scanf ( "%d", &linha ); // referente a linha - ghost
	}while (!validate_position(maze,linha,coluna));
	
  	player[0] = linha;
  	player[1] = coluna;
	player[2] = controle;
	position(maze,player,controle);
	clear_screen();
	print_maze(maze);
	do
	{
		linha = player[0];
		coluna = player[1];
		if (controle == '3')
		{
			printf ( "Qual a direção do ghost ?  = 1-Down , 2-Right, 3-Up, 4-Left = " );
		}else
		{
			printf ( "Qual a direção do pacman? = 1-Down , 2-Right, 3-Up, 4-Left = ");
		}
		scanf ("%d", &player[2]);
        	switch (player[2])
                {
                       case 1:
                               linha = linha+1;
                               break;
                       case 2:
                               coluna = coluna+1;
                               break;
                       case 3:
                                linha = linha-1;
                               break;
                       case 4:
                               coluna = coluna-1;
                               break;
                }
  	}while (!validate_position(maze,linha,coluna) || player[2] > 4 || player[2] < 1);

}
