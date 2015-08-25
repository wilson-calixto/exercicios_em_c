/*
 * Programa de Computadores e Algoritmos
 * Trabalho 1
 * Questao 2.16
 *
 * Equipe: 
 *         Delrik
 *         Elisabeth
 *         Hermamm
 *         Luis
 *         Luana
 *         Richardson
 *
 */

#include <stdio.h>
#include <math.h>
/* Para usar 'sqrt(x)' e 'pow(x,y)' é necessário abiblioteca include <math.h> e compilar usando -lm,
por exemplo "gcc ~nome.c -lm -o ~nome" */

int main (int argc, const char *argv[])
{
	float a, b, c, d, del, x1, x2;
	
	printf("Valor de 'a':\t");
	scanf("%f", &a);

	if (a==0)
	{
		printf("A equação não é do segundo grau.\n");
	}

	else
	{
		printf("Valor de 'b':\t");
		scanf("%f", &b);
		printf("Valor de 'c':\t");
		scanf("%f", &c);

		d = (pow(b,2) - 4*a*c);
		del = sqrt(d);

		if (d<0)
		{
			printf("\nA equação não possui raízes.\n");
			return 0;
		}

		if (d==0)
		{
			x1 = ((-b + del) / (2*a));
			printf("\nx = %.1f.\n", x1);
			return 0;
		}

		x1 = ((-b + del) / (2*a));
		x2 = ((-b - del) / (2*a));
		
		printf("\nx' = %.1f \n", x1);
		printf("x'' =  %.1f\n", x2);
	}

	return 0;
}
