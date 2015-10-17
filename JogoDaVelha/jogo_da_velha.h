int show_menu()
void mostra_matriz(char matriz[3][3]);
int jogada_valida(int *vetor_de_posicao, int jogada);
void marca_jodada(int posicao,int i,int *vetor_posicao);
void joga(int jogada,char matriz[3][3],int i);
int velhou(int i);

int ganhou(char mat[3][3]);
void para_um_facil(char matriz[3][3],int vetor_posicao[9]);
void para_um_dificil(char matriz[3][3],int vetor_posicao[9]);
void para_dois(char matriz[3][3],int vetor_posicao[9]);