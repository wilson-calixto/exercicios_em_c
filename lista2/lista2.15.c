/* 
 *  Programação de Computadores e Algoritmos
 *  Trabalho 1
 *  Questão 2.15
 *  Equipe: Benjamin Borges
 *  Davi Tavares
 *  Manoel Souza 
 *  Lucas Botinelly
 *  Jackson Gomes
 *  Robson Borges
 *  Grupo 1 - 
 *            *   */

#include  <stdio.h>

int main (int argc, const char *argv[])
{
	int lado1, lado2, lado3;
	printf("Digite o primeiro lado\n");
	scanf("%d", &lado1);
	printf("Digite o segundo  lado\n");
	scanf("%d", &lado2);
	printf("Digite o terceiro  lado\n");
	scanf("%d", &lado3);
	
	if ((lado1 + lado2 > lado3) && (lado1 + lado3 > lado2) && (lado2 + lado3 >  lado1))
	{
		if (lado1 == lado2 && lado1 == lado3)
		{
			printf("Triangulo Equilátero!\n");
		}if (lado1 != lado2 && lado1 != lado3 && lado2 != lado3)
		{
			printf("Triangulo Escaleno!\n");
		}if ((lado1 == lado2 ) || // 
       	    	     (lado1 == lado3 ) || // 
       	             (lado2 == lado3 )) 
		{
			printf("Triangulo Escaleno!\n");
		}else
		{
			printf("Triangulo qualquer");
		}
	}else
	{
		printf("Não é um triangulo\n");
	}
	return 0;

}

