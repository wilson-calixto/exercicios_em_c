/*Programação de computadores e algoritmos
  
  Trabalho 1
  Equipe: Paulo Marinho
	  Sergio Pinheiro
	  Wilson Calixto
	  Andressa Moreira
	  Rodrigo Oliveira
 */

#include<stdio.h>

int main (int argc, const char *argv[])
{
	int i, k, num, cont, divs;
	cont = 0;
	divs = 0;
	
	printf ("digite um numero: \n");
	scanf ("%d", &num);

	for (k=2; k<=num; k++)
	{
		for (i=2; i<k; i++)
		{
			if (k%i==0)
			{
				cont++;
				divs++;
			}
		}
		if (cont==0)
		{
			printf("o numero %d é primo\n", k);
		}
		cont=0;
		
	}
	printf("o programa fez %d divisões", divs);

	return 0;
}
