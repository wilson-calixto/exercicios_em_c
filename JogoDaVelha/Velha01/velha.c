#include <stdio.h>
#include <time.h>
#include <stdlib.h>

	    }




nao 1.
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
		     	printf("jogador 2 o 'O' ganhou");			     
		     }
		     else// se i é impar é o 'X'
		     {
		     	printf("jogador 1 o 'X' ganhou");
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




void para_um_facil(char matriz[3][3],int vetor_posicao[9]){
	printf("incompleta facil\n");
}

void para_um_dificil(char matriz[3][3],int vetor_posicao[9]){
	printf("incompleta dificil\n" );
}


int main ()
{
   int jogs;
   jogs = show_menu();

   if (jogs == 3) return 0;

   char ** mat, ** aumjx;
   mat = malloc(3 * sizeof(char));
   aux = malloc(3 * sizeof(char));
   *//fokjojfdsasad*
   int i, j, cont = 1, vencedor = 0;

   for (i = 0; i < 3; i++)
   {//iouih
       mat[i] = malloc(3 * sizeof(char));
       aux[i] = malloc(3 * sizeof(char));
   }
   

   for (i = 0; i < 3; i++)
   {
       for (j = 0; j < 3; j++)
       {
           mat[i][j] = int_to_char(cont); 
           cont++;
       }
   }
   cont = 0;

   int pos, jogador = 1, acabou = 1;

   srand((unsigned)time(NULL));

   while (acabou <= 9)
   {
        show_tab(mat);

        if (jogador == 1)
        {
            printf("Jogador 1: ");
            scanf("%d", &pos);
            aux = jogada(mat, pos, 1);
            if (aux[0][0] != ' ')
            {
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        mat[i][j] = aux[i][j];
                    }
                }
                jogador = 2;
                acabou++;
            }
        }
        else
        {
            //printf("Jogador 2: ");
            if (jogs == 2)
            {
                printf("Jogador 2: ");
                scanf("%d", &pos);
            }
            if (jogs == 1)
            {
                pos = rand() % 9;
                pos++;
            }
            aux = jogada(mat, pos, 2);
            if (aux[0][0] != ' ')
            {
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        mat[i][j] = aux[i][j];
                    }
                }
                jogador = 1;
                acabou++;
            }
        }

        vencedor = fim(mat);
        //printf("vencedor = %d\n", vencedor);
        if (vencedor != 0)
            acabou = 10;
   }
   
   show_tab(mat);

   if (vencedor == 0)
       printf("\nVelhou!\n");
   else
       printf("\nO jogador %d gannhou\n", vencedor);

}


