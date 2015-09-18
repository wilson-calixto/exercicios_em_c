#include <stdio.h>

//Inserindo os valores de n nos vetores
void insere_vetor(int tamanho, char *nome, float *salario, float *ref,float *val, int *hed,int *hen,int *nd,int *fal,int *de)
{
	int i;
	for ( i = 0; i < tamanho; i += 1 ) 
	{
		printf("Digite um nome: ");
		scanf("%s", &nome[i]);
		printf("Digite o salário: ");
		scanf(" %f",&salario[i]);
		printf("Digite as horas extras diurnas: ");
		scanf("%d",&hed[i]);
		printf("Digite as horas extras noturnas: ");
		scanf("%d",&hen[i]);
		printf("Digite o número de dependentes: ");
		scanf("%d",&nd[i]);
		printf("Digite as faltas em horas: ");
		scanf("%d",&fal[i]);
		printf("Digite os descontos eventuais: ");
		scanf("%d",&de[i]);
		printf("Digite os gastos com refeiçoes na empresa: ");
		scanf("%d",&ref[i]);
		printf("Digite vales tirados durante o mes: ");
		scanf("%d",&val[i]);		
	}
}