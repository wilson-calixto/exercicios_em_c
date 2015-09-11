/*
 Programacao de Computadores e Algoritmos
 Trabalho 2
 Questao 1.7
 
Equipe:
	Evandro Fernandes
	Jackson Gomes
	Jéssica Kelly
	Paulo Marinho
	Robson Borges	
	Rodrigo Oliveira
	
 */

#include <stdio.h>
#include "util.h"

int main(int argc, const char *argv){
    float valor, dias;
    printf("Informe o valor da prestação: \n");
    scanf("%f",&valor);
       while (valor!=0){
            printf("Informe os dias de atraso: \n");
            scanf("%f",&dias);
            printf("O valor da prestação é: %.2f\n",valor_pagamento(valor,dias));
            printf("Informe o valor da prestação: \n");
            scanf("%f",&valor);
        }
    return 0;

}

