/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 2
 * lista3.3.c
 *
 * Equipe:
 *
 *          Ewerton
 *          Hermann
 *          Lucas
 *          Jailson
 *          Wilson
 *          Richardson 
 *
 */
#include<stdio.h>
int cal_raizes() 
{
    int a,b,c,j,delta,resul;
    float r1,r2;
    char i;
    resul=0;

    printf("digites os valores de a,b,c: ");
    scanf("%d%d%d",&a,&b,&c);
    if (a > 0){
        delta = (b*b)-(4*a*c);
        for (j=1;j<=delta;j++)
        {
            if(delta % j != 0) /*verificando a raiz quadrada */
            { 
                if(j%2 !=0){
                resul++;
                }
            }
        }
        if (delta >= 0){  /*obtendo a raiz quando delta for maior ou igual a 0*/
            r1 = (-b + resul)/(2*a);
            r2 = (-b - resul)/(2*a);
            printf("as raizes são reias, a raiz 1 é %0.2f e a raiz 2 é %0.2f ",r1,r2);
        } 
        if (delta < 0){ /*obetendo a raiz quando delta for menor que 0 */
            r1 = (-b +('i'*resul))/(2*a);
            r2 = (-b - ('i'*resul))/(2*a);
            printf(" as raizes são complexas do tipo x+iy,e as raizes são %0.2f e %0.2f",r1,r2);
        }
     } 
    else {
        printf("digite um valor para 'a' maior que 0");
    }
    printf("\n");
 } 
int main(int argc,const char *argv[])
{ 
    cal_raizes();  /*chamando o calculo das raizes*/
  return 0; 
}

