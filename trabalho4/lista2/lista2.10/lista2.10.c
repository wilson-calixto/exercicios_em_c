<<<<<<< HEAD
=======
/*
* Programacao de Computadores e ALgoritmos
* Trabalho 4
* lista2.10.c
*
* Equipe
*  Juliany Raiol
*  Lucas Botinelly
*  Luiz Fernando
*  Richardson  
*/
>>>>>>> 525d9ecc7168fefd2638940bf2889474213935bc
#include<stdio.h>
#include"2.10.h"
int main(int argc, const char *argv[])

{
	//p(x)=a0+a1x+a2x2**2+...+anx**n
	int n=0;
	printf("Insira o grau do polinomio: ");//Lê o tamanho do vetor
	scanf("%d", &n);
	int i, j, vetor[n], k;
	printf("Quer em quantos pontos diferentes ?\n");//Vê a quantidade de loops que estarão no programa
	scanf("%d", &k);
	for (j=0; j<k; j++);//Loop pela quantidade de pontos diferentes
		for(i=0;i<n;i++)//loop para criar um vetor
		{	
			printf("Insira o valor do %dº valor: ", i+1);
			scanf("%d", &vetor[i]);	//Adiciona ao vetor
		}
		polinome(n, vetor);//chama a função
	return 0;
}
