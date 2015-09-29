/* Programacao de Computadores e ALgoritmos
 * Trabalho 5
 * Questao 5.01
 *
 * Equipe:
 *
 *          Paulo Henrique
 *          Raí Santos 
 *          Jackson Kelvin
 *          Ewerton Petillo
 *	    Jailson Pereira 
 */

//Autor:Raí Santos

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
    char string1[50];
    int n;

    printf("Insira o numero decimal: ");
    scanf("%d", &n);

    sprintf(string1, "%d", n); //converte número e armazena tudo em string1.
    printf("\"%s\"\n", string1); //mostra na tela o conteúdo da string1.
    
    return 0; 
}
 
