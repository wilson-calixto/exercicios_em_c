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
void zera_vetor(float *media_aritmetica,int prov)
{
	int j;
	for (j=0;j<prov;j++)
    	{
        	media_aritmetica[j]=0; //Zera o vetor, para não imprimir endereço de memória
    	}
}
void calcula_media(float *media_aritmetica, int prov, int alu)
{
	int j;	
	for (j=0;j<prov;j++)
    	{	
        media_aritmetica[j]=(media_aritmetica[j]/alu);    //Divide o somatorio das notas de cada prova pela quantidade de alunos
    	}
}
void imprime_media(int prov, float *media_aritmetica)
{
	int i;	
	for (i=0;i<prov;i++)
	{	
        printf("A media aritmetica da prova %d eh : %.2f\n", i+1, (media_aritmetica[i]));
    	}
}
