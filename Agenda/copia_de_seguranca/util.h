#define TAM 1000
#define NC 10

typedef struct Contato
{
	char nome[TAM], cod[TAM], end[TAM];
}Contato;

Contato agenda[NC];

void apaga(char arquivo[]);
void copia(char dest[], char origem[]);
void cria_agenda_arquivo(const char arquivo[]);
void edita(char arquivo[]);
void limpa_arquivo(char arquivo[]);
void lista(char arquivo[]);
void pesquisa(char arquivo[]);
void saida(int controle,int saida);
int entrada();
