#include <stdio.h>
#include <string.h>

//Inserindo os valores de n nos vetores
void insere_vetor(int tamanho, char **nome, float *salario, float *ref,float *val, int *hed,int *hen,int *nd,int *fal,int *de)
{
	int i;
	for ( i = 0; i < tamanho; i++ ) 
	{
		printf("Digite um nome: ");
		//gets(nome[i][]);
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
		scanf("%d",&de[i]);
		printf("Digite os gastos com refeiçoes na empresa: ");
		scanf("%f",&ref[i]);
		printf("Digite vales tirados durante o mes: ");
		scanf("%f",&val[i]);		
	}
}


void print_vetor(int tamanho, char **nome, float *salario, float *ref,float *val, int *hed,int *hen,int *nd,int *fal,int *de)
{
	int i;
	float *he, *sf, *sb, *df, *sl;
	
	//Cálculo para emissão da folha de pagamento
	for ( i = 0; i < tamanho; i += 1 ) 
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
	for ( i = 0; i < tamanho; i += 1 ) 
	{
		printf("Nome: %s", nome[i]);
		printf("\nHoras Extras: %f",he[i]);
		printf("\nSalario Família: %f",sf[i]);
		printf("\nSalario Bruto: %f", sb[i]);
		printf("\nDescontos efetuados: %f",df[i]);
		printf("\nSalario Liquido: %f",sl[i]);
		printf("\n");
	}
}
		
		
		
			
			
			
			
	
	
	