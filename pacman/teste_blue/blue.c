#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define L 23
#define C 30

// P = pacman, V = red ghost, B = blue ghost
//EXECUTEM AÍ... MELHOREM SE PUDER...

//verifica se a posicao é valida na matriz
int validate_position(char maze[L][C], int x, int y)
{

  	if (maze[x][y]==' ')
  	{
    		return 1;
  	}
  	else
  	{
    		return 0;
  	}

}

//printa matriz... trivial...hehehe
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


//verifica todas as possibilidades de combinações de posições
void target_destiny_blue(char matriz[L][C], int lpack, int cpack,int lred, int cred) //l = linha, c = coluna
{
	int d1, d2, lblue, cblue, aux1; // d1 = distancia da linha do pac à linha do red <---> d2 = mesma coisa, para coluna
	
	d1 = lpack - lred; //linha pac - linha red
	d2 = cpack - cred; //coluna pac - coluna red
	// distancias maiores que zero
	if(d1 >= 0 && d2 >= 0)
	{
		lblue = lpack + d1; //calcula a linha que o blue vai
		cblue = cpack + d2; //---------- coluna que o blue vai
		if(lblue < L && cblue < C && validate_position(matriz, lblue, cblue)) //se for valida, marca com D
		{
			matriz[lblue][cblue] = 'D';
		}
		// se a coluna for maior que o limite
		if(cblue >= C)
		{
			aux1 = cblue - 28;
			lblue = lblue - aux1;//decrementa as linhas(prioridadde p cima)
			if(lblue > 0 && validate_position(matriz, lblue, 28)) //se for valida, marca com D e fixa a coluna 28
			{
				matriz[lblue][28] = 'D';
			}
		}
		//if a linha for maior que o limite
		 
	}
	//distancias menores que zero
	// a msm coisa da primeira verificação segue para as demais
	if(d1 <= 0 && d2 <= 0)
	{
		lblue = lpack + d1;
		cblue = cpack + d2;
		if(lblue > 0 && cblue > 0 && validate_position(matriz, lblue, cblue))
		{
			matriz[lblue][cblue] = 'D';
		}
	}
	//linha maior, coluna menor que zero
	if(d1 > 0 && d2 < 0 )
	{
		lblue = lpack + d1;
		cblue = cpack + d2;
		if(lblue < L && cblue > 0 && validate_position(matriz, lblue, cblue))
		{
			matriz[lblue][cblue] = 'D';
		}
	}
	//linha menor, coluna maior que zero
	if(d1 < 0 && d2 > 0 )
	{
		lblue = lpack + d1;
		cblue = cpack + d2;
		if(lblue > 0 && cblue < C && validate_position(matriz, lblue, cblue))
		{
			matriz[lblue][cblue] = 'D';
		}
    	}
    	//linha == 0, coluna maior ou menor
    	/*if((d1 == 0 && (d2 > 0 || d2 < 0)))
	{
		lblue = lpack;
		cblue = cpack + d2;
		if(cblue < C || cblue > 0 && validate_position(matriz, lblue, cblue))
		{
			matriz[lblue][cblue] = 'D';
		}
    	}
    	//linha maior ou menor, coluna == 0
    	if((d2 == 0 && (d1 > 0 || d1 < 0)))
	{
		lblue = lpack + d1;
		cblue = cpack;
		if(lblue < L || lblue > 0  && validate_position(matriz, lblue, cblue))
		{
			matriz[lblue][cblue] = 'D';
		}
    	}*/

    	printf("\n\n");
}

int main(int argc, const char *argv[])
{
	int validate_position(char maze[L][C], int x, int y);
	void print_maze(char maze[L][C]);
	//void target_pac(char matriz[L][C]);
	//void target_red(char matriz[L][C]);
	//void target_blue(char matriz[L][C]);
	void target_destiny_blue(char matriz[L][C], int lpack, int cpack,int lred, int cred);

	char maze[L][C]={{'0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0'},
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
    
    
    	print_maze(maze);
    	
	int lpac, cpac, validade1=0;
	
	while(validade1 == 0) //insere  a pos do pacman
	{
		printf("Insira a posicao do pacman: \n");
    		scanf("%d",&lpac); scanf("%d",&cpac);
		if(validate_position(maze, lpac, cpac))
		{
			validade1 = 1;
			maze[lpac][cpac] = 'P';
		}
		else
		{
			printf("Posicao invalida!!!\n\n");
		}
	}


	int lred, cred, validade2=0;
	
	while(validade2 == 0) // posicao red
	{
		printf("Insira a posicao do ghost red: \n");
    		scanf("%d",&lred); scanf("%d",&cred);
		if(validate_position(maze, lred, cred))
		{
			validade2 = 1;
			maze[lred][cred] = 'R';
		}
		else
		{
			printf("Posicao invalida!!!\n\n");
		}
	}


	int lblu, cblu, validade3=0;
	
	while(validade3 == 0) //pos blue
	{
		printf("Insira a posicao do ghost blue: \n");
    		scanf("%d",&lblu); scanf("%d",&cblu);
		if(validate_position(maze, lblu, cblu))
		{
			validade3 = 1;
			maze[lblu][cblu] = 'B';
		}
		else
		{
			printf("Posicao invalida!!!\n\n");
		}
	}

	target_destiny_blue(maze, lpac, cpac, lred, cred);
    	print_maze(maze);
    	//printf("qual a linha e coluna que vc deseja colocar o blue ghost?\n");
    	//scanf("%d",&a);
    	//scanf("%d",&b);
    	//printf("qual a linha e coluna que vc deseja colocar o red ghost?\n");
    	//scanf("%d",&c);
    	//scanf("%d",&d);
    

    return 0;   
}
