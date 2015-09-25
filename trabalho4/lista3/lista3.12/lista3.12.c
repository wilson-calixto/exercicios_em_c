/*
* Programacao de Computadores e ALgoritmos
* Trabalho 4
* lista3.12.c
*
* Equipe
*  Juliany Raiol
*  Lucas Botinelly
*  Luiz Fernando
*  Richardson  
*/

#include <stdio.h>
#include <stdlib.h>
#include "empresa.h"

int main(int arc, char const *argv[])
{
	//Declaração dos vetores
	char nome[100][100];
	float *salario, *ref, *val, *de;
	int *hed, *hen, *nd, *fal, n; 
	
	//Tamanho do vetor
	printf("Digite o numero de funcionarios: ");
	scanf("%d",&n);
	fflush(stdin);
	
	hed = (int*)  malloc (n*sizeof(int*));
	hen = (int*)  malloc (n*sizeof(int*));
	nd = (int*)  malloc (n*sizeof(int*));
	fal = (int*)  malloc (n*sizeof(int*));
	de = (float*)  malloc (n*sizeof(float*));
	
	salario = (float*)  malloc (n*sizeof(float*));
	ref = (float*)  malloc (n*sizeof(float*));
	val = (float*)  malloc (n*sizeof(float*));
	
	//Inserção nos vetores
	insere_vetor(n,nome,salario,ref,val,hed,hen,nd,fal,de);
	
	
	printf("\n");
	//Impressão da folha de pagamento
	print_vetor(n,nome,salario,ref,val,hed,hen,nd,fal,de);
	
	return 0;
}