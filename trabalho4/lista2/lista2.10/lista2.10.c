/*
* Programacao de Computadores e ALgoritmos
* Trabalho 4
* lista3.02.c
*
* Equipe
*  Juliany Raiol
*  Lucas Botinelly
*  Luiz Fernando
*  Richardson  
*/
#include<stdio.h>
#include"polinome.c"
int main(int argc, const char *argv[])

{
	//p(x)=a0+a1x+a2x2**2+...+anx**n
	int n=0;
	printf("Insira o grau do polinomio: ");
	scanf("%d", &n);
	int i, j, vetor[n], k;
	printf("Quer em quantos pontos diferentes ?\n");
	scanf("%d", &k);
	for (j=0; j<k; j++);
		for(i=0;i<n;i++)
		{	
			printf("Insira o valor do %dº valor: ", i+1);
			scanf("%d", &vetor[i]);	
		}
		polinome(n, vetor);
	return 0;
}
