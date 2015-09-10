/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 2
 * lista 4 questao 4, letra b.
 * 
 * Equipe:
 * 
 *      Ewerton
 *      Hermann
 *      Jailson
 *      Lucas
 *      Richardson
 *      Wilson 
 *
 */

#include<stdio.h>
#include"alfa.h"

float alfa(float x, float y);

int main()
{

    float radiandos=180,x,y;

    printf("Digite um valor para o x \n");
    scanf("%f",&x);
    printf("Digie um valor para o y \n");
    scanf("%f",&y);

	/* retira as coordenadas invalidas */

	if(x==0 && y==0)
	{
		printf("O valor digitado é invalido");
	}
    else
    {
		if(x>=0 && y>=0)	
		{
			/*chama a funcao que calcula o angulo das coordenadas x e y */
			printf("O valor é %f\n",alfa(x,y));
		}
        else
        {
			printf("O valor digitado é invalido");
		}
	}

	return 0;
}
