#include <stdio.h>
#include <stdlib.h>


typedef enum {VAZIO = ' ', O = 'O', X = 'X'} tConteudo;
typedef enum {MIN, MAX} tTipoDeNo;
typedef enum {FAIL, SUCESS} tValida;
typedef enum {EASY = 1, MEDIUM = 2, HARD = 3} tDificult;


typedef  struct  no
{
    tConteudo tabuleiro[3][3];
    tTipoDeNo tipoDeNo;
    struct  no  *filhoEsquerda;
    struct  no  *proximoIrmao;
} tNo, *tArvore;


tArvore AcrescentaNaLista( tArvore *lista, tConteudo tab[][3],
                           unsigned linha, unsigned coluna, tConteudo jogada )
{
    tArvore   aux;
    unsigned  i, j;
    aux = (tArvore)malloc(sizeof(tNo));

    for (i = 0; i < 3; ++i)
        for (j = 0; j < 3; ++j)
            aux->tabuleiro[i][j] = tab[i][j];
    aux->tabuleiro[linha][coluna] = jogada;
    aux->proximoIrmao = *lista;
    aux->filhoEsquerda = NULL;
    *lista = aux;
    return aux;
}



tArvore GeraFilhos(tConteudo tab[][3])
{
    tArvore   listaDeNos = NULL;
    tConteudo quemJoga;
    unsigned  i, j;
    quemJoga =  O;
    for (i = 0; i < 3; ++i)
        for (j = 0; j < 3; ++j)
            if (tab [i][j] == VAZIO)
                listaDeNos = AcrescentaNaLista(&listaDeNos, tab, i, j, quemJoga);
    return listaDeNos;
}

void Expande(tArvore p, unsigned nivel, unsigned profundidade)
{
    tArvore filhos;
    if (nivel <= profundidade)
    {
        filhos = GeraFilhos(p->tabuleiro);
        p->filhoEsquerda = filhos;

        while(filhos)
        {
            if (p->tipoDeNo == MAX)
                filhos->tipoDeNo = MIN;
            else
                filhos->tipoDeNo = MAX;

            filhos->filhoEsquerda = NULL;

            Expande(filhos, nivel + 1, profundidade);
            filhos = filhos->proximoIrmao;
        }
    }
}


tArvore ConstroiArvore(tConteudo tab[][3], unsigned profundidade)
{
    tArvore  arvore;
    unsigned i, j;
    arvore = malloc(sizeof(tNo));

    for (i = 0; i < 3; ++i)
        for (j = 0; j < 3; ++j)
            arvore->tabuleiro[i][j] = tab[i][j];
    arvore->tipoDeNo = MAX;
    arvore->filhoEsquerda = NULL;
    arvore->proximoIrmao = NULL;
    Expande(arvore,  1, profundidade);
    return arvore;
}

int Avalia(tConteudo tab[][3], tConteudo jogador)
{
    unsigned  i, j;
    tConteudo oponente;
    int valor = 0, valorOponente = 0;

    for (i = 0; i < 3; ++i)
        if ( ((tab[i][0] == jogador) || (tab[i][0] == VAZIO)) &&
                ((tab[i][1] == jogador) || (tab[i][1] == VAZIO)) &&
                ((tab[i][2] == jogador) || (tab[i][2] == VAZIO)) )
            valor++;
    /* Verifica quantas colunas o jogador pode preencher */
    for (j = 0; j < 3; ++j)
        if ( ((tab[0][j] == jogador) || (tab[0][j] == VAZIO)) &&
                ((tab[1][j] == jogador) || (tab[1][j] == VAZIO)) &&
                ((tab[2][j] == jogador) || (tab[2][j] == VAZIO)) )
            valor++;
    /* Verifica quantas diagonais o jogador pode preencher */
    if ( ((tab[0][0] == jogador) || (tab[0][0] == VAZIO)) &&
            ((tab[1][1] == jogador) || (tab[1][1] == VAZIO)) &&
            ((tab[2][2] == jogador) || (tab[2][2] == VAZIO)) )
        valor++;
    if ( ((tab[0][2] == jogador) || (tab[0][2] == VAZIO)) &&
            ((tab[1][1] == jogador) || (tab[1][1] == VAZIO)) &&
            ((tab[2][0] == jogador) || (tab[2][0] == VAZIO)) )
        valor++;
    oponente =  X;

    for (i = 0; i < 3; ++i)
        if ( ((tab[i][0] == oponente) || (tab[i][0] == VAZIO)) &&
                ((tab[i][1] == oponente) || (tab[i][1] == VAZIO)) &&
                ((tab[i][2] == oponente) || (tab[i][2] == VAZIO)) )
            valorOponente++;

    for (j = 0; j < 3; ++j)
        if ( ((tab[0][j] == oponente) || (tab[0][j] == VAZIO)) &&
                ((tab[1][j] == oponente) || (tab[1][j] == VAZIO)) &&
                ((tab[2][j] == oponente) || (tab[2][j] == VAZIO)) )
            valorOponente++;

    if ( ((tab[0][0] == oponente) || (tab[0][0] == VAZIO)) &&
            ((tab[1][1] == oponente) || (tab[1][1] == VAZIO)) &&
            ((tab[2][2] == oponente) || (tab[2][2] == VAZIO)) )
        valorOponente++;
    if ( ((tab[0][2] == oponente) || (tab[0][2] == VAZIO)) &&
            ((tab[1][1] == oponente) || (tab[1][1] == VAZIO)) &&
            ((tab[2][0] == oponente) || (tab[2][0] == VAZIO)) )
        valorOponente++;
    return (valor - valorOponente);
}

void ProcuraMelhorLance(tArvore arvore, tConteudo jogador, tArvore *melhor,
                        int *valor)
{
    tArvore  p, melhor2;
    int      valor2;
    if (!arvore->filhoEsquerda)
    {
        *valor = Avalia(arvore->tabuleiro,jogador);
        *melhor = arvore;
    }
    else
    {
        p = arvore->filhoEsquerda;
        ProcuraMelhorLance(p, jogador, melhor, valor);
        *melhor = p;

        if (arvore->tipoDeNo == MIN)
            *valor = (-1)*(*valor);
        p = p->proximoIrmao;
        while (p)
        {
            ProcuraMelhorLance(p, jogador, &melhor2, &valor2);
            if (arvore->tipoDeNo == MIN)
                valor2 = (-1)*valor2;
            if (valor2 > *valor)
            {
                *valor = valor2;
                *melhor = p;
            }
            p = p->proximoIrmao;
        }
        if (arvore->tipoDeNo == MIN)
            *valor = (-1)*(*valor);
    }
}

void DestroiArvore(tArvore* raiz){

     if(*raiz != NULL){
             if((*raiz)->filhoEsquerda != NULL)
                DestroiArvore(&((*raiz)->filhoEsquerda));
             if((*raiz)->proximoIrmao != NULL)
                DestroiArvore(&((*raiz)->proximoIrmao));
             free(*raiz);
             *raiz = NULL;
     }
}



void MelhorJogada( tConteudo tab[][3], unsigned profundidade, tConteudo jogador,
                   tConteudo novoTab[][3] )
{
    tArvore  arvore, melhorLance;
    unsigned i, j;
    int      valor;

    arvore = ConstroiArvore(tab, profundidade);

    ProcuraMelhorLance(arvore, jogador, &melhorLance, &valor);
    for (i = 0; i < 3; ++i)
        for (j = 0; j < 3; ++j)
            novoTab[i][j] = melhorLance->tabuleiro[i][j];
    DestroiArvore(&arvore);
}

void Apresentacao(void)
{

    char enter;

    printf("Bem-vindo ao Jogo da Velha:\n");
    printf("O jogador comeca!!! \nEscolha se quer ser 'X' ou 'O'\nPronto p/comecar...");
    printf("Aperte ENTER p/ iniciar...");
    scanf("%c", &enter);
    if(enter == '\n')
    {
        system("cls");
    }

}
void InicializaTabuleiro(tConteudo tabuleiro[][3])
{

    unsigned  i, j, nOs = 0, nXs = 0;
    printf("\t\t\t\tTABULEIRO INICIALIZADO\n\n");
    for (i = 0; i < 3; ++i)
    {

        if(i == 1 || i ==2 )
        {
            printf("--- --- ---\n");
        }

        for (j = 0; j < 3; ++j)
        {
            tabuleiro[i][j] = VAZIO;
            if( j ==1)
                printf("| %c |", tabuleiro[i][j]);
            else
                printf(" %c ", tabuleiro[i][j]);
        }

        printf("\n");
    }

}

void ApresentaJogo(tConteudo tabuleiro[][3])
{

    unsigned  i, j;

    for (i = 0; i < 3; ++i)
    {

        if(i == 1 || i ==2 )
        {
            printf("--- --- ---\n");
        }

        for (j = 0; j < 3; ++j)
        {

            if( j ==1)
                printf("| %c |", tabuleiro[i][j]);
            else
                printf(" %c ", tabuleiro[i][j]);
        }

        printf("\n");
    }

}


void EscolheJogada(tConteudo tabuleiro[][3], tConteudo  jogador)
{

    tValida cond = FAIL;
    int opcao;


    do{

            printf("Escolha a jogada 1 a 9:\n");
            scanf("%d", &opcao);


            switch(opcao)
            {
            case 1:
                if(tabuleiro[0][0] == VAZIO)
                {
                    tabuleiro[0][0] = jogador;
                    cond = SUCESS;
                }
                break;
                 case 2:
                if(tabuleiro[0][1] == VAZIO)
                {

                    tabuleiro[0][1] = jogador;
                    cond = SUCESS;
                }
                break;
            case 3:
                if(tabuleiro[0][2] == VAZIO){
                    tabuleiro[0][2] = jogador;
                    cond = SUCESS;
                }
                break;
            case 4:
                if(tabuleiro[1][0] == VAZIO){
                    tabuleiro[1][0] = jogador;
                    cond = SUCESS;
                }
                break;
            case 5:
                if(tabuleiro[1][1] == VAZIO)
                {

                    tabuleiro[1][1] = jogador;
                    cond = SUCESS;
                }
                break;
            case 6:
                if(tabuleiro[1][2] == VAZIO)
                {
                    tabuleiro[1][2] = jogador;
                    cond = SUCESS;
                }
                break;
            case 7:
                if(tabuleiro[2][0] == VAZIO)
                {

                    tabuleiro[2][0] = jogador;
                    cond = SUCESS;
                }
                break;
            case 8:
                if(tabuleiro[2][1] == VAZIO)
                {

                    tabuleiro[2][1] = jogador;
                    cond = SUCESS;
                }
                break;
            case 9:
                if(tabuleiro[2][2] == VAZIO)
                {
                    tabuleiro[2][2] = jogador;
                    cond = SUCESS;
                }
                break;
            }
        }while (cond!= SUCESS);


}

unsigned JogoTerminado(tConteudo  tabuleiro[][3])
    {

        unsigned  i, j;
        tConteudo cont = VAZIO;

        unsigned jogadas =0;
        for (i = 0; i < 3; ++i)
            for (j = 0; j < 3; ++j)
                if (tabuleiro[i][j] == VAZIO)
                {
                    jogadas++;
                }

        return jogadas;
    }


tConteudo EhVencedor(tConteudo Matriz[][3])
{
    int linha, coluna;
    tConteudo vez = X;
    int ct=0;
    while (ct < 2){

     for (linha = 0; linha < 3; linha++){
     if ((Matriz[linha][0] == vez) && (Matriz[linha][1] == vez) && (Matriz[linha][2] == vez))
     return vez;

  for (coluna = 0; coluna < 3; coluna++){
    if ((Matriz[0][coluna] == vez) && (Matriz[1][coluna] == vez) && (Matriz[2][coluna] == vez))
      return vez;
  }
  if ((Matriz[0][0] == vez) && (Matriz[1][1] == vez) && (Matriz[2][2] == vez)){
     return vez;
    }
  if ((Matriz[0][2] == vez) && (Matriz[1][1] == vez) && (Matriz[2][0] == vez)){
    return vez;
}
     }
    vez = O;
    ct++;

}
   return VAZIO;
}



void AtualizaTabuleiro(tConteudo tabuleiro[][3], tConteudo novoTabuleiro[][3]){

        unsigned  i, j;

        for (i = 0; i < 3; ++i)
            for (j = 0; j < 3; ++j)
            tabuleiro[i][j] = novoTabuleiro[i][j];

}




    int main (void)
    {

        tConteudo tabuleiro[3][3];
        tConteudo novoTabuleiro[3][3];
        tConteudo jogador = X;
        tConteudo oponente = O;
        tConteudo campeao = VAZIO;
        tDificult prof = HARD;
        int opcao;
        int flag =  0;

        //Apresentacao();
            //printf("%d", (int)prof);
        InicializaTabuleiro(tabuleiro);
        //InicializaTabuleiro(novoTabuleiro);

        /*
        printf("\nEscolha a Dificuldade:\n 1 - FACIL\n2 - MEDIO\n3 - DIFICIL \n");
        scanf("%d", &prof);*/

        printf("%d", JogoTerminado(tabuleiro));
        printf("\nVc quer Iniciar?:\n 1 - SIM\n0 - não \n");
        scanf("%d", &flag);



        while( JogoTerminado(tabuleiro) > 0)
        {
            printf("Quantidade de jogadas= %d\n", JogoTerminado(tabuleiro));
            if (flag == 1)
            {
                EscolheJogada(tabuleiro, jogador);
                flag = 0;
                //ApresentaJogo(tabuleiro);
            }
            else
            {
                MelhorJogada( tabuleiro, (int)prof,oponente,novoTabuleiro);
                //EscolheJogada(tabuleiro, oponente);
                //
                //ApresentaJogo(novoTabuleiro);
                AtualizaTabuleiro(tabuleiro, novoTabuleiro);

                flag = 1;
            }

            ApresentaJogo(tabuleiro);
            campeao = EhVencedor(tabuleiro);

            if(campeao == O ){
            printf("COMPUTER WIN");
            break;
            }else if(campeao == X){
            printf("YOU WIN!");
            break;
            }


        }


if(campeao == VAZIO){
    printf("DRAW!!!");
}



        system("PAUSE");
        return 0;
}
