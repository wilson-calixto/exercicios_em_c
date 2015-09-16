#include<stdlib.h>
#include <stdio.h>
#include "funcao.c"
int main()
{
	float *vetor,procurado;
	int i,indice,loops,vezes_q_apareceu;
	
	/* pede o numero de loops */
	printf("digite os loops: ");    	
	scanf("%d",&loops);
	vetor = (float*) ( malloc( sizeof(float) * loops ) );//vetor[loops]
	
	/* carrega os numeros no vetor */
	for (i=0;i<loops;i++ )
	{
		printf ("Digite o numero %d: ",i+1);
		scanf ("%f", &vetor[i]);
	}
    
	/* ordena o vetor   */
	ordenar_vet(vetor,loops);
   

	/* pega um numero e mostra na tela quantas vezes ele se repetiu  */
	for (i=0;i<loops ;i++ )
	{
		procurado=vetor[i];        
		
	/* chama a funcao que devolve quantas vezes esse numero apareceu  no vetor */
        vezes_q_apareceu = qnt_ap(vetor,loops,procurado);



	/*  mostra o numero e quantas vezes o numeo repetiu */
		if( vezes_q_apareceu==2)
		{
			printf ( "o numero %.2f repetiu : %d vez\n",vetor[i],vezes_q_apareceu-1 );
		}
		else
		{
			printf ( "o numero %.2f repetiu : %d vezes\n",vetor[i],vezes_q_apareceu-1 );
		}
        
        
	/* incrementa o contador para que ele va para o proximo numero */
        i+=vezes_q_apareceu-1;
    
    }
    
   	        



    return 0;

}
