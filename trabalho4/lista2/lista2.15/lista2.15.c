        /*
* Programacao de Computadores e ALgoritmos
* Trabalho 4
* lista2.15.c
*
* Equipe
* Juliany Raiol
* Lucas Botinelly
* Luiz Fernando
* Richardson
*
*/
#include<stdio.h>
#include"fl2.15.h"
int main(int argc, const char *argv[])
{
    int alu, prov, i, j, k;
    printf("Insira a quantidade de provas: ");   //Recebe o tamanho do vetor PESO
    scanf("%d", &prov);
    printf("Insira a quantidade de alunos: ");   //Recebe o tamanho do vetor NOTAS
    scanf("%d", &alu);
    int pesos[prov];
    float notas[prov], acm=0, media_aritmetica[prov];
    zera_vetor( media_aritmetica, prov);
    zera_vetor(notas, alu);
    for (k=0;k<prov;k++)
    {
    	printf("Insira o peso da %dº prova: ", k+1);    
    	scanf("%d", &pesos[k]);                   //Recebe o valor do peso de cada prova
    	acm+=pesos[k];
    }
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
    calcula_media(media_aritmetica, prov, alu);
    imprime_media(prov, media_aritmetica);
    printf("----------Fim do Programa----------\n");
    return 0;
}
