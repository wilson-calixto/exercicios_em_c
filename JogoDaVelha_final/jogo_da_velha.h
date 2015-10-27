

int jogada_correta(int vetor_posicao[9],int i);
int jogada_valida(int *vetor_de_posicao, int jogada);
void marca_jodada(int posicao,int i,int *vetor_posicao);
void joga(int jogada,int matriz[3][3],int i);
int ganhou(int mat[3][3]);
void play(int matriz[3][3],int vetor_posicao[9],int i,int modo_de_jogo,int jogada);
int vencedor(int matriz[3][3]);
int minimax(int val, int profundidade, int matriz[3][3], int best_i, int best_j);
int play_easy_bot(int vetor_posicao[9]);
