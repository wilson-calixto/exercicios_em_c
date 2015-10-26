#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#ifdef WIN32  //se for windows
  #define limpa_tela system("cls") //limpa tela
#else //senão, ex.: linux
  #define limpa_tela system("/usr/bin/clear") //limpa tela
#endif


/*funca retorna :
1 se o jogo é para dois 
2 se o jogo é para um facil 
3 se o jogo é para um dificil 
4 para sair 

*/
int show_menu()
{
    int jogs = 0;

    while (jogs==0)//retira jogadas invalidas
    {
        limpa_tela; //limpando a tela
        printf("******* JOGO DA VELHA *******");
        printf("\n\n1 multiplayer\n2  alone\n3. Sair\n");
        scanf("%d", &jogs);		
        if (jogs == 3)
        {
            jogs = 4;
	}
        if (jogs == 2)
        {
            printf("Dificuldade: \n2. easy\n3. hard\n");
            scanf("%d", &jogs);		        
    	}
    }
    return jogs;
}

/* Funcao que verifica se uma jogada ja saiu ou nao percorrendo o vetor de jogas ja realizadas
 se a jogada ja saiu retorna 0, se nao 1.
 */

// Programador: Jackson kelvin

void mostra_matriz(int matriz[3][3], char mprint[3][3])
{
    int i,j;
    for (i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(matriz[i][j]==-1)
            {
                mprint[i][j]= 'O';
            }
            if(matriz[i][j]==-2)
            {
                mprint[i][j]='X';
            }
        }
    }
    printf("   |   |\n %c | %c | %c\n___|___|___\n   |   |\n %c | %c | %c\n___|___|___\n   |   |\n %c | %c | %c\n   |   |\n",mprint[0][0],mprint[0][1],mprint[0][2],mprint[1][0],mprint[1][1],mprint[1][2],mprint[2][0],mprint[2][1],mprint[2][2]);	
}			


/* Funcao que verifica se uma jogada ja saiu ou nao percorrendo o vetor de jogas ja realizadas
 se a jogada ja saiu retorna 0, se nao 1.
 */

// Programador: Hermann J. Hernani.

int jogada_valida(int *vetor_posicao, int jogada) //recebe o vetor de jogadas realizadas e a jogada que se deseja fazer
{
   int i;
   for(i = 0; i < 9; i++) // percorre o vetor
   {
       if (jogada == vetor_posicao[i]) // se a jogada existir no vetor, ou seja, ja foi realizada retorna 0, valor para false.
       {
           return 0;
       }
 
   }
    return 1; //  se a jogada não existir ele retorna 1, valor para true
}

/*retira as coordenadas invalidas e as que ja sairam e retorna uma jogada valida*/   
// programador : WISON CALIXTO
 int jogada_correta(int vetor_posicao[9],int i)
 {
 int jogada;
        do{            
	            
	            if(i%2==0)// se i é par é o '0'
	            {
	            	printf("Digite a jogada jogador 2\n");
	            }
	            else// se i é impar é o 'X'
	            {
	            	printf("Digite a jogada jogador 1\n");
	            }
	            
	            scanf("%d",&jogada);
	      }while((jogada>9 || jogada<1)||!jogada_valida(vetor_posicao,jogada));
 return jogada;
 
 }

/* Função com jogadas randomicas de 1 a 9 */
int play_easy_bot(int vetor_posicao[9])
{
    int jogada;
    srand( (unsigned)time(NULL) );
    
    do{
        	jogada=1 + ( rand() % 8 );
	    
    }while((jogada>9 || jogada<1)||!jogada_valida(vetor_posicao,jogada));
 
    return jogada;
 }

/* Funcao que marca as jogadas que ja sairam.
 */
// Programador: Raí Santos
void marca_jodada(int posicao,int i,int *vetor_posicao)
{
        vetor_posicao[i] = posicao;               
}

/* Funcao que marca com X ou O*/

// Programador: wilson calisto 

void joga(int jogada,int matriz[3][3],int i) //recebe o vetor da  ultima jogada e a matriz e modifica a matriz
{
    
   
        if(i%2==0) /*se par o jogador é o 1==O se impar é 2==X */
 	     {
		           	switch(jogada)
					{

					case 1: matriz[0][0]=-1;
							  break;        
					case 2: matriz[0][1]=-1;
						    break;

					case 3: matriz[0][2]=-1;
						    break;

					case 4: matriz[1][0]=-1;
						    break;

					case 5: matriz[1][1]=-1;
						    break;

					case 6: matriz[1][2]=-1;
						    break;

					case 7: matriz[2][0]=-1;
						    break;

					case 8: matriz[2][1]=-1;
						    break;

					case 9: matriz[2][2]=-1;
						    break;
				
					default: printf("Posicao invalida! \n");
			  		}
		 }
    	else
   		 {
    
		           	switch(jogada)
					{

					case 1: matriz[0][0]=-2;
							  break;        
					case 2: 
						  	matriz[0][1]=-2;
						    break;

					case 3: matriz[0][2]=-2;
						    break;

					case 4: matriz[1][0]=-2;
						    break;

					case 5: matriz[1][1]=-2;
						    break;

					case 6: matriz[1][2]=-2;
						    break;

					case 7: matriz[2][0]=-2;
						    break;

					case 8: matriz[2][1]=-2;
						    break;

					case 9: matriz[2][2]=-2;
						    break;
				
					default: printf("Posicao invalida! \n");
			  		}
        
     }   
}



/* Funcao que verifica se o jogador e quem ganhou ganhou*/
// Programador: Delrick 
int ganhou(int mat[3][3],int i)
{
    if((mat[0][0] == mat[0][1] && mat[0][1] == mat[0][2]) || (mat[1][0] == mat[1][1] && mat[1][1] == mat[1][2]) || (mat[2][0] == mat[2][1] && mat[2][1] == mat[2][2]) || (mat[0][0] == mat[1][0] && mat[1][0] == mat[2][0]) || (mat[0][1] == mat[1][1] && mat[1][1] == mat[2][1]) || (mat[0][2] == mat[1][2] && mat[1][2] == mat[2][2]) ||  (mat[0][0] == mat[1][1] && mat[1][1] == mat[2][2]) || (mat[0][2] == mat[1][1] && mat[1][1] == mat[2][0]))
    {      
    
	      	 if(i%2==0)// se i é par é o '0'
		     {
		     	printf("jogador 2 o 'O' ganhou\n");			     
		     }
		     else// se i é impar é o 'X'
		     {
		     	printf("jogador 1 o 'X' ganhou\n");
		     }       
        return 1;
    }
    else
    {
        return 0;
    }
}

//wilson
void play(int matriz[3][3],int vetor_posicao[9],int i,int modo_de_jogo,int jogada);
{					
	marca_jodada(jogada,i,vetor_posicao);		     
	joga(jogada,matriz,i);
}




/* Funções para utilizar o minimax - IA  
   Programadora: Juliany 
*/

int vencedor(int matriz[3][3])
{
	int i;
	for (i = 0; i < 3; i++) {
		if (matriz[i][0] && matriz[i][1] == matriz[i][0] && matriz[i][2] == matriz[i][0])
			return matriz[i][0];
		if (matriz[0][i] && matriz[1][i] == matriz[0][i] && matriz[2][i] == matriz[0][i])
			return matriz[0][i];
	}
	if (!matriz[1][1]) return 0;
 
	if (matriz[1][1] == matriz[0][0] && matriz[2][2] == matriz[0][0]) return matriz[0][0];
	if (matriz[1][1] == matriz[2][0] && matriz[0][2] == matriz[1][1]) return matriz[1][1];
 
	return 0;
}

void converter(int b[3][3], int matriz[3][3])
{
        int i, j;
        for(i=0;i<3;i++)
        {
           for(j=0;j<3;j++)  
             {
                if (matriz[i][j] == 'X')
                {
                    b[i][j] = 1;
                }
                else
                {
                    if (matriz[i][j] == 'O')
                        b[i][j] = -1;
                    else b[i][j] = 0;
                }               
             }
         }
}









int b2[3][3]; /* board. 0: blank; -1: computer; 1: human */
 
int check_winner()
{
	int i;
	for (i = 0; i < 3; i++) 
	{
	
		if (b2[i][0] && b2[i][1] == b2[i][0] && b2[i][2] == b2[i][0])
			return b2[i][0];
		if (b2[0][i] && b2[1][i] == b2[0][i] && b2[2][i] == b2[0][i])
			return b2[0][i];
	}
	if (!b2[1][1]) return 0;
 
	if (b2[1][1] == b2[0][0] && b2[2][2] == b2[0][0]) return b2[0][0];
	if (b2[1][1] == b2[2][0] && b2[0][2] == b2[1][1]) return b2[1][1];
 
	return 0;
}
 

