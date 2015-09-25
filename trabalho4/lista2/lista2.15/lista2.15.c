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
    acm=read_pesos(pesos);
    read_notas(notas, media_aritmetica, notas, pesos, alu, acm);	
    calcula_media(media_aritmetica);
    for (i=0;i<prov;i++)
    {
        printf("A media aritmetica da prova %d eh : %.2f\n", i+1, (media_aritmetica[i]));
    }
    printf("----------Fim do Programa----------\n");
    return 0;
}
