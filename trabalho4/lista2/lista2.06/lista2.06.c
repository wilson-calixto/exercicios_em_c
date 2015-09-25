/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 4
 * lista2.06.c
 *
 * Equipe:
        Sergio Pinheiro      
 *      Andressa Moreira    
 *      Wilson Neto
 *      Gabriel Faraco
 *      Bejamin Borjes
 *          
 *      
 */

#include <stdio.h>
#include <stdlib.h>
#include "../../util.c/util.h"

int main (void)
{
    char frase[200];
    char palavra[100];
    //char frase[] = "ana e mariana comem banana";
    //char palavra[] = "ana";
    
    char *f = (char *) malloc(sizeof(char));
    char *p = (char *) malloc(sizeof(char));
    char *x = (char *) malloc(sizeof(char));
   

    int i, cont = 0, tam, bl;

    printf("Digite a frase: \n");
    gets(frase);

    printf("Digite a palavra: \n");
    gets(palavra);

    f = &frase[0];
    p = &palavra[0];

    tam =  len(palavra);
    
    while (*f != '\0') //While pecorre cada caracter ate achar o '\0' (nulo - fim da linha)
    {
        if (*f == *p) //Procura por uma letra igual a primeira letra da palavra
        {   
            x = f;
            bl = 1; //Variavel boleana para saber se encontrou alguma letra diferente
            for (i = 0; i < (tam - 1); i++) //Percorre as proximas letras da frase para procurar letras diferentes
            {
                
                if(*x != *p) //Caso encontre uma letra diferente, a variavel boleana muda para falso
                    bl = 0;
                x++;
                p++;
            }
            if (bl == 1) //Caso a variavel boleana esteja em verdade, contabiliza a palavra
                cont++;
            
            p = &palavra[0];       
        }
        f++;
    }

    //Imprime a resposta

    printf("\nA palavra %s aparece %d vezes\n", palavra, cont);

    //free(f);
    //free(p);
    //free(x);

    return 0;
}
