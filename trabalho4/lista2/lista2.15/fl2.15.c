    /*   Computadores e ALgoritmos
* Trabalho 4
* lista2.15.c
*
* Equipe
* Juliany Raiol
* Lucas Botinelly
* Luiz Fernando
* Richardson
*/
#include<stdio.h>
void media_ponderada(float *notas, int *pesos,int alunos, float somapeso)
{
    int i;
    float media=0, acm=0;
    for(i=0;i<alunos;i++)
    {
        acm+=(notas[i]*pesos[i]);  //Multiplica o valor da nota pelo valor do peso          
    }
    media=acm/somapeso;      //divide a soma do produto entre as notas e os pesos
    printf("%.2f\n", media);
}

float read_peso(float *pesos)
{
	int k;
	for (k=0;k<prov;k++)
	{
        printf("Insira o peso da %dº prova: ", k+1);    
        scanf("%d", &pesos[k]);                   //Recebe o valor do peso de cada prova
    	acm+=pesos[k];
    	}
	return acm;
}
void read_notas(float *notas, float *media_aritmetica, float *notas, float *pesos, int alu, float acm)
{	
	int i, j;	
	for (i=0;i<alu;i++)
    	{
        	for (j=0; j<prov;j++)
        	{
        	    printf("Insira a nota da %d prova do %d aluno: ", j+1, i+1);
        	    scanf("%f", &notas[j]);   //Recebe a nota do aluno "i" da prova "j"
        	    media_aritmetica[j]+=notas[j];    //Acumula o valor da nota "j" no vetor media_aritmetica
        	}
        	media_ponderada(notas, pesos, alu, acm); //Chama a função pra calcular a média ponderada do aluno "i"
    		
    	}
}
void calcula_media(float *media_aritmetica)
{
	int j;	
	for (j=0;j<prov;j++)
    	{	
        media_aritmetica[j]=(media_aritmetica[j]/alu);    //Divide o somatorio das notas de cada prova pela quantidade de alunos
    	}
}
