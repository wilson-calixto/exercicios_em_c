/*Programacao de Computadores e Algoritmos
Trabalho 1
Questao 3.26
Equipe: Andressa Moreira
	Paulo Marinho
	Sergio Pinheiro
	Wilson Calixto
	Rodrigo Oliveira*/

#include <stdio.h>

int main(int argc, const char *argv[])
{
	int cand1, cand2, cand3, numele, i, nulo, arm;
	char ch;
	cand1=0;
	cand2=0;
	cand3=0;
	nulo=0;

	printf("Digite o numero de eleitores. \n");
	scanf("%d", &numele);
	arm = numele;
	
	for (i=0; i<arm;i++)
	{
		printf("1. Candidato 1 \n");
		printf("2. handidato 2 \n"); 
		printf("3. Candidato 3 \n");
		
		scanf("%s", &ch);

		switch(ch)
		{
			case '1': 
				cand1++;
				break;
			case '2':
				cand2++;
				break;
			case '3':
				cand3++;
				break;
			default:
				printf("Voto nulo\n");
				nulo++;
		}
				
	}

	
	printf("Votos no Candidato 1: %d\n", cand1);
	printf("Votos no Candidato 2: %d\n", cand2);
	printf("Votos no Candidato 3: %d\n", cand3);
	printf("Votos nulos: %d\n", nulo);

	return 0;
}
