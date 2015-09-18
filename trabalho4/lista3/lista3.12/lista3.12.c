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
#include "empresa.h"

int main(int arc, char const *argv[])
{
	//Declaração dos vetores
	char *nome;
	float *salario, *ref, *val;
	int *hed, *hen, *nd, *fal, *de, n; 
	
	printf("Digite o numero de funcionarios: ");
	scanf("%d",&n);
	
	//Inserção nos vetores
	insere_vetor(n,nome,salario,ref,val,hed,hen,nd,fal,de);
	
	
	return 0;
}