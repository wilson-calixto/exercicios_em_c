typedef struct jogador
{
    int num, marca;
}Jogador;

extern const Jogador jogador1, jogador2; 

void cria_vetor(char *vetor);
void mostra(char *vetor);
void pede_jogada(char *vetor, Jogador jogador);
void troca(Jogador *jogador);
int velhou();
int ganhou(char *vetor, Jogador jogador);
void hXh(Jogador *jogador, char *vetor);
void hXm(Jogador *jogador, char *vetor);
void maquina_joga(char *vetor, Jogador jogador);
void sleep(time_t delay);
