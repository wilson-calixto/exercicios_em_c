#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string1[50];
    int i, n;

    printf("Insira o numero decimal: ");
    scanf("%d", &n);

    sprintf(string1, "%d\n", n); //converte número e armazena tudo em string1.
    printf("%s", string1); //mostra na tela o conteúdo da string1;
    
    for(i = 0; i < 4; i++)
    {
        printf("%c\n", string1[i]);
    }
    
     
    return 0; 
}
 
