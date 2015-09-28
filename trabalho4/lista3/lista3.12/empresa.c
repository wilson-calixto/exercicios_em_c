#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Inserindo os valores de n nos vetores
void insere_vetor(int tamanho, char nome[][100], float *salario, float *ref,float *val, int *hed,int *hen,int *nd,int *fal,float *de)
{
	int i;
	for ( i = 0; i < tamanho; i++ ) 
	{
		printf("Digite um nome: ");
		scanf("%s",nome[i]);
		fflush(stdin);
		printf("Digite o salário: ");
		scanf("%f",&salario[i]);
		printf("Digite as horas extras diurnas: ");
		scanf("%d",&hed[i]);
		printf("Digite as horas extras noturnas: ");
		scanf("%d",&hen[i]);
		printf("Digite o número de dependentes: ");
		scanf("%d",&nd[i]);
		printf("Digite as faltas em horas: ");
		scanf("%d",&fal[i]);
		printf("Digite os descontos eventuais: ");
		scanf("%f",&de[i]);
		printf("Digite os gastos com refeiçoes na empresa: ");
		scanf("%f",&ref[i]);
		printf("Digite vales tirados durante o mes: ");
		scanf("%f",&val[i]);
		fflush(stdin);		
	}
}


void print_vetor(int n, char nome[][100], float *salario, float *ref,float *val, int *hed,int *hen,int *nd,int *fal,float *de)
{
	int i;
	float *he, *sf, *sb, *df, *sl;
	
	he = (float*)  malloc (n*sizeof(float*));
	sf = (float*)  malloc (n*sizeof(float*));
	sb = (float*)  malloc (n*sizeof(float*));
	df = (float*)  malloc (n*sizeof(float*));
	sl = (float*)  malloc (n*sizeof(float*));
	
	//Cálculo para emissão da folha de pagamento
	for ( i = 0; i < n; i ++ ) 
	{
		//Cálculo das horas extras
		he[i] = (hed[i] * (salario[i]/160)) + ((hen[i] * 1.2) * (salario[i]/160));
		
		//Cálculo do salário família
		sf[i] = nd[i] * 0.05 * 760;
	
		//Cálculo do salário bruto
		sb[i] = salario[i] + he[i] + sf[i];
		
		//Cálculo dos descontos efetuados
		df[i] =  (0.08 * salario[i]) + (fal[i] * salario[i]/160) + ref[i] + val[i] + de[i] + (0.08 * sb[i]);
		
		//Cálculo do salário bruto
		sl[i] = sb[i] - df[i];
	}
	
	//Impressão do vetores
	for ( i = 0; i < n; i ++ ) 
	{
		printf("Nome: %s", nome[i]);
		printf("\nHoras Extras: %f",he[i]);
		printf("\nSalario Família: %f",sf[i]);
		printf("\nSalario Bruto: %f", sb[i]);
		printf("\nDescontos efetuados: %f",df[i]);
		printf("\nSalario Liquido: %f",sl[i]);
		printf("\n\n");
	}
}
		
		
		
			
			
			
			
	
	
	