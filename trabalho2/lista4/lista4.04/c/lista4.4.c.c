/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 2
 * lista3 questao 4 letra c.
 * 
 * Equipe:
 * 
 *      Ewerton
 *      Hermann
 *      Jailson
 *      Lucas
 *      Richardson
 *      Wilson 	
 */

#include<stdio.h>
#include"../../../util.c/util.h"

float alfa(float x, float y);

int main(int argc, const char *argv[])
{
	int i,n;
	float x,y,menor=181, numero;
	
	/* descobre o numero de loops */
	printf("Digite o numero de loops\n");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("Digite um valor para o x \n");
		scanf("%f",&x);
		printf("Digite um valor para o y \n");
		scanf("%f",&y);

	/* retira as coordenadas invalidas */

		if(x==0 && y==0)
		{
			printf("O valor digitado é invalido");
			i--;
		}
	        else
	        {
			if(x>=0 && y>=0)	
			{
		            /*verifica qual o menor angulo formado pelas coordenadas x e y */
				numero=alfa(x,y);
	
	                	if (numero<menor)
	                	{
	                    		menor=numero;
	                	}
	                
			}
	            	else
	            	{
				printf("O valor digitado é invalido");
				i--;
			}
		}
	
	}

	/* chama a funcao que retorna o menor angulo  */
	printf("O menor valor é %f\n", menor);

	return 0;
}
