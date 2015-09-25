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
