#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
    char string1[50];
    int n;

    printf("Insira o numero decimal: ");
    scanf("%d", &n);

    sprintf(string1, "%d\n", n); //converte número e armazena tudo em string1.
    printf("%s", string1); //mostra na tela o conteúdo da string1.
    
    return 0; 
}
 
