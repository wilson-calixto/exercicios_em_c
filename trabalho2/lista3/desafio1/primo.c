/*
 * Programacao de Computadores e Algoritmos
 * Trabalho 2
 * Lista3 - Desafio1
 *
 * Equipe:
 *
 *          Dreka
 *          Elisabeth
 *          Julianny
 *          Luana
 *          Wilson 
 */

#include<stdio.h>

void primo (int total)
{
    int i, aux, resto;
    
    for(i=1; i <= total; i++)   //'i' é o número a ser testado e vai de '1' a '1000'
    {
        if (i == 1 || i == 2)   //'1' e '2' são primos então serão impressos para começar a sequência
        {
            printf("%i\n",i);
        }   else    //laço começa a executar a partir do número '3' até '1000'
            {             
                for(aux = 2; aux < i; aux++)    //laço que testa se o valor atual em 'i' terá algum outro divisor além de '1' e ele mesmo
                {                    
                    resto = i % aux;
                }
                
                if(resto == 0)  //se sim, então 'i' não é primo
                {
                        break;  //então a verificação é interrompida e volta do começo
                }   //se não, a verificação continua, indo para o próximo 'if'
            } 
               
        if(resto == 1)  //se sim, então o valor atual em 'i' é primo e é impresso na tela
        {
            printf("%i\n",i);
        }
    }
}
