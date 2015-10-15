#include <stdio.h>
#include <stdlib.h>

int main()
{
	char matriz[3][3] ={{'1','2','3'},
			    {'4','5','6'},
			    {'7','8','9',}};

printf("   |   |\n %c | %c | %c\n___|___|___\n   |   |\n %c | %c | %c\n___|___|___\n   |   |\n %c | %c | %c\n   |   |\n",matriz[0][0],matriz[0][1],matriz[0][2],matriz[1][0],matriz[1][1],matriz[1][2],matriz[2][0],matriz[2][1],matriz[2][2]);	
	
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int vetor_de_endereco[17];
int vetor_posicao[17];
int main()
{
    int i,jogada;
	char matriz[3][3] ={{'1','2','3'},
					   {'4','5','6'},
					   {'7','8','9',}};

    for(i=1;i<=9:i++){
    
	    mostra_matriz(matriz);
	
	    if(i%2==0) /*se par o jogador é o 1==O se impar é 2==X */
	    {
	
	    }
	    else
	    {
	        
	        /*retira as coordenadads invalidas*/
	        do{            
	            printf("Digite a jogada jogador 2");
	            scanf("%d",&jogada);
	        }while(jogada>9 || jogada<1);
	        
	        /*converte um numero em um endereco*/
	        pede_jogada(jogada);
	        
	        /* se ainda tiver jogada */       
          
	                valida_jogada();
	                    
	                joga();
	                ganhou();
	                velhou();
	                
	       
	            
	       
	    }
	
	}
    return 0;
}
