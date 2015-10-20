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

1 se o jogo é para um facil 
2 se o jogo é para um dificil 
3 para sair 
4 se o jogo é para dois 
*/
int show_menu()
{
    int jogs = 0;

    while (jogs == 0)
    {
        limpa_tela; //limpando a tela	        

        printf("******* JOGO DA VELHA *******");
        printf("\n\n1. 1 jogador\n2. 2 jogadores\n3. Sair\n");
        scanf("%d", &jogs);
		
        if (jogs == 2)
        {
            jogs = 4;
	    }


        if (jogs == 1)
        {
            printf("Dificuldade: \n1. Facil\n2. Dificil\n");
            scanf("%d", &jogs);		        
    	}
    }
    return jogs;
}

/* Funcao que verifica se uma jogada ja saiu ou nao percorrendo o vetor de jogas ja realizadas
 se a jogada ja saiu retorna 0, se nao 1.
 */

// Programador: Jackson kelvin

void mostra_matriz(char matriz[3][3])
{
    printf("   |   |\n %c | %c | %c\n___|___|___\n   |   |\n %c | %c | %c\n___|___|___\n   |   |\n %c | %c | %c\n   |   |\n",matriz[0][0],matriz[0][1],matriz[0][2],matriz[1][0],matriz[1][1],matriz[1][2],matriz[2][0],matriz[2][1],matriz[2][2]);	
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
int play_easy_bot(int vetor_posicao[9],int i)
{
    int jogada;
    srand( (unsigned)time(NULL) );
    
    do{
        if(i%2==0)// se i é par é o '0'
	    {
			jogada=1 + ( rand() % 8 );
	    }
	    else// se i é impar é o 'X'
        {
	       	printf("Digite a jogada jogador 1\n");
			scanf("%d",&jogada);
	    }
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

void joga(int jogada,char matriz[3][3],int i) //recebe o vetor da  ultima jogada e a matriz e modifica a matriz
{
    
   
        if(i%2==0) /*se par o jogador é o 1==O se impar é 2==X */
 	     {
		           	switch(jogada)
					{

					case 1: matriz[0][0]='0';
							  break;        
					case 2: 
						  matriz[0][1]='0';
						    break;

					case 3: matriz[0][2]='0';
						    break;

					case 4: matriz[1][0]='0';
						    break;

					case 5: matriz[1][1]='0';
						    break;

					case 6: matriz[1][2]='0';
						    break;

					case 7: matriz[2][0]='0';
						    break;

					case 8: matriz[2][1]='0';
						    break;

					case 9: matriz[2][2]='0';
						    break;
				
					default: printf("Posicao invalida! \n");
			  		}
		 }
    	else
   		 {
    
		           	switch(jogada)
					{

					case 1: matriz[0][0]='X';
							  break;        
					case 2: 
						  	matriz[0][1]='X';
						    break;

					case 3: matriz[0][2]='X';
						    break;

					case 4: matriz[1][0]='X';
						    break;

					case 5: matriz[1][1]='X';
						    break;

					case 6: matriz[1][2]='X';
						    break;

					case 7: matriz[2][0]='X';
						    break;

					case 8: matriz[2][1]='X';
						    break;

					case 9: matriz[2][2]='X';
						    break;
				
					default: printf("Posicao invalida! \n");
			  		}
        
     }   
}



/* Funcao que verifica se o jogador e quem ganhou ganhou*/
// Programador: Delrick 
int ganhou(char mat[3][3],int i)
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

void para_dois(char matriz[3][3],int vetor_posicao[9])
{
    int i,jogada;
    for(i=1;i<=9;i++)
    {       
	      limpa_tela; //limpando a tela	   
		  mostra_matriz(matriz);	
	        /*retira as coordenadas invalidas e as que ja sairam*/    
 		  jogada=jogada_correta(vetor_posicao,i);	        
			 /*marca as jogadas ja feitas */
	      marca_jodada(jogada,i,vetor_posicao);
	          /* joga */ 	     
	      joga(jogada,matriz,i);		 	
          limpa_tela; //limpando a tela	 	
		  mostra_matriz(matriz);		     
	     /* verifica se um jogador ganhou*/
	      if(ganhou(matriz,i))
	      {
	      	break;
	      }
		     /* verifica se velhou*/
	     if(i==9)
	     {
	     		printf("\nVelhou\n");
	     }
	     
	 }

}

void para_um_facil(char matriz[3][3],int vetor_posicao[9])
{
    int i,jogada;
    for(i=1;i<=9;i++)
    {       
	      limpa_tela; //limpando a tela	   
		  mostra_matriz(matriz);	
	        /*retira as coordenadas invalidas e as que ja sairam*/    
 		  jogada=play_easy_bot(vetor_posicao,i);	        
			 /*marca as jogadas ja feitas */
	      marca_jodada(jogada,i,vetor_posicao);
	          /* joga */ 	     
	      joga(jogada,matriz,i);		 	
          limpa_tela; //limpando a tela	 	
		  mostra_matriz(matriz);		     
	     /* verifica se um jogador ganhou*/
	      if(ganhou(matriz,i))
	      {
	      	break;
	      }
		     /* verifica se velhou*/
	     if(i==9)
	     {
	     		printf("\nVelhou\n");
	     }
	     
	 }

}

void para_um_dificil(char matriz[3][3],int vetor_posicao[9]){
	int jogada, ai,  i;
	for(i=0;i<9;i++)
	{
		limpa_tela;
		mostra_matriz(matriz);
		
		joga(jogada,matriz[3][3],i);
		
		ai = mimax(matriz, vetor_posicao[9]);
		marca_jodada(jogada,i,vetor_posicao);
		mostra_matriz(matriz);
		
		
	}
}

int minimax(char matriz[3][3],int vetor_posicao[9])
{
	int posicao;
	
	
	return posicao;
}
