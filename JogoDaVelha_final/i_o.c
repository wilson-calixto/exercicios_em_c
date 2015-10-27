#include <stdio.h>
#include <string.h>
#ifdef WIN32  //se for windows
  #define limpa_tela system("cls") //limpa tela
#else //senão, ex.: linux
  #define limpa_tela system("/usr/bin/clear") //limpa tela
#endif

//A função retorna a saidas, que correspondem ao numero do parametro de entrada "saida"
//A matriz dada como entrada é pelo case 3, que agora é o antigo MOSTRA_MATRIZ.
// Programador: Wilson Oliveira Neto.
void saida(int controle,int saida)
{
    switch(controle)
    {
        case 1: printf("******* JOGO DA VELHA *****\n\n1. Multiplayer\n2. Single Player\n3. Exit\n");
                break;
        case 2: printf("Dificuldade: \n2. Easy\n3. Hard\n");
                break;
        
        case 3: limpa_tela;
                break;
        case 4: printf("Digite a jogada jogador 2\n");
                break;
        case 5: printf("Digite a jogada jogador 1\n");
                break;
        case 6: printf("Posicao invalida! \n");
                break;
        case 7: printf("Jogador 2 o 'O' ganhou\n");
                break;
        case 8: printf("Jogador 1 o 'X' ganhou\n");
                break;
        case 9: printf("\nVelhou\n");
                break;
        case 10: printf("O");
                break;
        case 11: printf("\nSaindo\n");
                break;
        case 12: printf("Joguei no %d",saida);
                break;

    }

}

//A função pega a entrada de dados, serão processados em uma outra função.
// Programador: Wilson Oliveira Neto.
int entrada()
{
    int jogs=0;
    
    scanf("%d", &jogs);
    
    return jogs;
}

//programador Raí Santos
//funcao para printar a matriz preenchida com X e O

void mostra_matriz(int matriz[3][3], char mprint[3][3])
{
    int i,j;
    printf("\n");
    for (i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(matriz[i][j]==-1)
            {
                mprint[i][j]= 'O';
            }
            if(matriz[i][j]==-2)
            {
                mprint[i][j]='X';
            }
        }
    }
    printf("   |   |\n %c | %c | %c\n___|___|___\n   |   |\n %c | %c | %c\n___|___|___\n   |   |\n %c | %c | %c\n   |   |\n",mprint[0][0],mprint[0][1],mprint[0][2],mprint[1][0],mprint[1][1],mprint[1][2],mprint[2][0],mprint[2][1],mprint[2][2]);	
}


/*funca retorna :
1 se o jogo é para dois 
2 se o jogo é para um facil 
3 se o jogo é para um dificil 
4 para sair 

*/
int show_menu()
{
    int jogs = 0;

    while (jogs==0)//retira jogadas invalidas
    {
        limpa_tela; //limpando a tela
        saida(1,0);      
        jogs=entrada();		
        if (jogs == 3)
        {
            jogs = 4;
	}
        if (jogs == 2)
        {
            saida(2,0);
            jogs=entrada();
    	}
    }
    return jogs;
}

