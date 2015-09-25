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
#include"fl2.15.c"
int main(int argc, const char *argv[])
{
    int alu, prov, i, j, k;
    printf("Insira a quantidade de provas: ");   //Recebe o tamanho do vetor PESO
    scanf("%d", &prov);
    printf("Insira a quantidade de alunos: ");   //Recebe o tamanho do vetor NOTAS
    scanf("%d", &alu);
    int pesos[prov];
    float notas[prov], acm=0, media_aritmetica[prov];
    for (j=0;j<prov;j++)
    {
        media_aritmetica[j]=0; //Zera o vetor, para não imprimir endereço de memória
    }
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
    for (j=0;j<prov;j++)
    {
        media_aritmetica[j]=(media_aritmetica[j]/alu);    //Divide o somatorio das notas de cada prova pela quantidade de alunos
    }
    for (i=0;i<prov;i++)
    {
        printf("A media aritmetica da prova %d eh : %.2f\n", i+1, (media_aritmetica[i]));
    }
    printf("----------Fim do Programa----------\n");
    return 0;
}
