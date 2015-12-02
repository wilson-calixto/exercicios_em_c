#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef WIN32  //se for windows
  #define limpa_tela system("cls") //limpa tela
#else //senão, ex.: linux
  #define limpa_tela system("/usr/bin/clear") //limpa tela
#endif

// Programador: Wilson Oliveira Neto.
void saida(int controle,int saida)
{
    switch(controle)
    {
        case 1: printf("\nImpossivel abrir o arquivo.\n\n");
                break;
        case 2: printf("Informe o codigo do contato: ");
                break;
        
        case 3: limpa_tela;
                break;
        case 4: printf("---------------------------------------------------------\n");
                break;
        case 5: puts("Digite o codigo do contato a ser modificado:"); 
                break;
        case 6: puts("Informe o nome do contato:");
                break;
        case 7: puts("Informe o endereco do contato:");
                break;
        case 8: printf("Digite o codigo do usuario a ser apagado no arquivo: "); 
                break;
        case 9:  printf("Operacao invalida.\n");
                break;
        case 10: printf("\nInforme a operação que deseja realizar:\n 1 - Criar agenda por arquivo\n 2 - Listar contatos\n 3 - Editar contatos\n 4 - Apagar contatos\n 5 - Pesquisar contato\n 6 - Limpa agenda\n 9 - Sair\n\nOperação: ");
                break;
        
    }

}
