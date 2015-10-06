/*
 *  *  Programação de Computadores e Algoritmos
 *     Trabalho 5
 *     Questão 5.02
 *     Equipe: 
 *	Manoel Victor
 *      Paulo Marinho
 *      Wilson Araujo 
 *   
 */

#include <stdio.h>
#include <stdlib.h>

int strparaint(char string[10])
{
    int inteiro;
    //função do stdio.h para receber um numero e fazer a conversão
    sscanf(string,"%d",&inteiro);
    //retorna esse numero como inteiro
    return inteiro;
}
