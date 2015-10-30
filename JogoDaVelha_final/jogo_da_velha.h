#define LINHA 3
#define COLUNA 3

int jogada_valida(int vetor_posicao[9], int jogada);
void marca_jodada(int posicao,int i,int vetor_posicao[9]);
void joga(int jogada,int matriz[LINHA][COLUNA],int i);
int ganhou(int mat[LINHA][COLUNA]);
void play(int matriz[LINHA][COLUNA],int vetor_posicao[9],int i,int modo_de_jogo,int jogada);
int ganhou_jogador(int mat[LINHA][COLUNA]);
