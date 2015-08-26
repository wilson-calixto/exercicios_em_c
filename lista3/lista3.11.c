/* 
 *  Programação de Computadores e Algoritmos
 *  Trabalho 1
 *  Questão 3.13
 *  Equipe: Benjamin Borges
 *  Davi Tavares
 *  Manoel Souza 
 *  Lucas Botinelly
 *  Jackson Gomes
 *  Robson Borges
 *  Grupo 1 - 
 * */

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int inicio,fim,soma;

    soma=0;
    printf("Escreva o primeiro numero:  ");
    scanf("%d",&inicio);
    printf("Escreva o segundo numero:   ");
    scanf("%d",&fim);

    for(inicio++;inicio<fim;inicio++)
    {
        soma+=inicio;
    }


    printf("Soma do intervalo:  %d ",soma);

    return 0;
}
