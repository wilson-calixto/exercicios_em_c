#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000

typedef struct Contato
{
    char cod[MAX], nome[MAX], end[MAX];
}Contato;

void edita(char arquivo[])
{
    
    FILE *arqEntrada, *arqSaida;
    int i, line, linha;
    char textoArquivo[MAX];
    char output[MAX] = "";
    Contato contato;
    
    strcat(output, arquivo);
    strcat(output, ".editado");
    
    if(((arqEntrada = fopen(arquivo, "r")) == NULL) || ((arqSaida = fopen(output, "w")) == NULL))
        printf("\nImpossivel abrir o arquivo...\n\n");
    else if((arqEntrada != NULL) && (arqSaida != NULL))
    {

        puts("Digite o codigo do contato a ser modificado:"); 
        scanf("%d", &line); 
        getchar();

        puts("Informe o nome do contato:");
        fgets(contato.nome,MAX,stdin);

        puts("Informe o endereco do contato:");
        fgets(contato.end,MAX, stdin);

        line = (line* 7) - 1;
   
        for(i = 0; !feof(arqEntrada);i++)
        { 
    	    memset(textoArquivo, '\0', MAX); 
            fgets(textoArquivo, MAX + 1, arqEntrada);
        
            if(linha == line || linha == line - 1)
            {
                if(linha == line - 1)
                {
                    fprintf(arqSaida,"Nome: %s",contato.nome);
                    linha += 1;
                    continue;
                }
                else if(linha == line)
                {
                    fprintf(arqSaida,"Endereco: %s",contato.end);
                    linha += 1;
                    continue;
                }
                else
                {
                    linha = linha + 1; 
                    continue; 
                }
            }
        
            linha = linha + 1;
        
            fputs(textoArquivo, arqSaida);
        }
    
        fclose(arqEntrada);
        fclose(arqSaida);
    }
}
