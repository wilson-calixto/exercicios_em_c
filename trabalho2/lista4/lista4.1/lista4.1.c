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
  

