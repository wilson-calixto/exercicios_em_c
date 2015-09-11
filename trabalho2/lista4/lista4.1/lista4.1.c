/*
 *  Programação de Computadores e Algoritmos
 *  Trabalho 2
 *  Lista 4.1
 *  Equipe: Benjamim Borges
 *  Davi Tavares
 *  Paulo Henrique
 *  Fernando Calderaro
 *  Lucas Frota
 *  Luiz Fernando
 *
 * */

#include <stdio.h>


int main (){
  int a,b,d;
    printf ("Digite o primeiro número:");
    scanf ("%d", &a);
    printf ("Digite o segundo número:");
    scanf ("%d", &b);
    printf ("Digite um dígito a procurar:");
    scanf ("%d", &d);
    printf ("Repetições: %d\n", contadigitos (a, d));
    return 0;
  }
  

