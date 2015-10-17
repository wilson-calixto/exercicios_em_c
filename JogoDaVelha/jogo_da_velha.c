#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef WIN32  //se for windows
  #define limpa_tela system("cls") //limpa tela
#else //senão, ex.: linux
  #define limpa_tela system("/usr/bin/clear") //limpa tela
#endif

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


 //recebe o vetor de jogadas e retorna: 1 pra velhou e 0 para falso
// Programador: wilson calisto

int velhou(int i)
{
   if(i==9)
   {
        return 1;
   }
   else
   {
   
        return 0;
   }
   
}



/* Funcao que verifica se o jogador ganhou*/
// Programador: Delrick 
int ganhou(char mat[3][3])
{
    if((mat[0][0] == mat[0][1] && mat[0][1] == mat[0][2]) || (mat[1][0] == mat[1][1] && mat[1][1] == mat[1][2]) || (mat[2][0] == mat[2][1] && mat[2][1] == mat[2][2]) || (mat[0][0] == mat[1][0] && mat[1][0] == mat[2][0]) || (mat[0][1] == mat[1][1] && mat[1][1] == mat[2][1]) || (mat[0][2] == mat[1][2] && mat[1][2] == mat[2][2]) ||  (mat[0][0] == mat[1][1] && mat[1][1] == mat[2][2]) || (mat[0][2] == mat[1][1] && mat[1][1] == mat[2][0]))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}



void para_um(char matriz[3][3],int vetor_posicao[9])
{
    int i,jogada;
    for(i=1;i<=9;i++)
    {       
	
	        /*retira as coordenadas invalidas e as que ja sairam*/
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
	        
			 /*marca as jogadas ja feitas */
	      marca_jodada(jogada,i,vetor_posicao);
	          /* joga */ 	     
	      joga(jogada,matriz,i);		 
	
          limpa_tela; //limpando a tela	        
		
		  mostra_matriz(matriz);
			     
	     /* verifica se um jogador ganhou*/
	      if(ganhou(matriz))
	      {
		     if(i%2==0)// se i é par é o '0'
		     {
		     	printf("jogador 2 o 'O' ganhou");
		     	break;		     
		     }
		     else// se i é impar é o 'X'
		     {
		     	printf("jogador 1 o 'X' ganhou");
		     	break;		     
		     }	     
	      }
	     /* verifica se velhou*/
	     if(velhou(i))
	     {
	     		printf("\nVelhou\n");
	     }
	     
	 }

}