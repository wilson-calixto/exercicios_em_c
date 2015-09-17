/*  Programacao de Computadores e ALgoritmos
 *  Trabalho 4
 *  Lista2.07
 *   
 *  Equipe:
 *      
 *          Paulo Henrique
 *          Rai Santos 
 *          Jackson Kelvin
 *          Wilson Calisto
 *          Ewerton Petillo 
 *            
 */

#include<stdlib.h>
#include <stdio.h>
#include "funcao.h"
int main()
{
	float *vetor,*numeros_q_repetiram,procurado;
	int i,e,indice,loops,vezes_q_apareceu,resposta;
	
	/* pede o numero de loops */
/*	printf("digite os loops: ");    	*/
	scanf("%d",&loops);
	vetor = (float*) ( malloc( sizeof(float) * loops ) );//vetor[loops]
	numeros_q_repetiram = (float*) ( malloc( sizeof(float) * loops ) );//vetor[loops]
	/* carrega os numeros no vetor */
	for (i=0;i<loops;i++ )
	{
	/*	printf ("Digite o numero %d: ",i+1);*/
		scanf ("%f", &vetor[i]);
		numeros_q_repetiram[i]=3888859555888;
	}
    
    /* a letra e é o indice do vetor chamdo numeros_q_repetiram */	
   
	e=0;
	/* pega um numero e mostra na tela quantas vezes ele se apareceu  */
	for (i=0;i<loops ;i++ )
	{

		procurado=vetor[i];
		resposta=qnt_ap(numeros_q_repetiram,loops,procurado);
			/* se o numero não esta no novo vetor, o programa o isere lá e mostra ao usuario qnt vzs ele apareceu no vetor original*/
		if(resposta==0)
		{
			numeros_q_repetiram[e]=procurado;
			e++;				
			/* chama a funcao que devolve quantas vezes esse numero apareceu  no vetor original */
		    vezes_q_apareceu = qnt_ap(vetor,loops,procurado);
			/*  mostra o numero e quantas vezes o numero apareceu no vetor original*/
			if( vezes_q_apareceu==1)
			{
				printf ( "%.1f ocorre %d vez\n",vetor[i],vezes_q_apareceu );
			}
			else
			{
				printf ( "%.1f ocorre %d vezes\n",vetor[i],vezes_q_apareceu );
			}
      	
         }
     }
     return 0;

}
