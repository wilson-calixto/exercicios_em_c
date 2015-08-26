#include <stdio.h>

int main(int argc, const char *argv[])
{
	int i, n, idade, idade_media=0;
	i = 0;

	printf("Digite a quantidade de alunos da turma: ");
	scanf("%d", &n);

	for (i=0; i<n; i++)
	{
	printf("Digite a idade do aluno(a): ");
	scanf("%d", &idade);
	idade_media += idade;
	}
	idade_media /= n;
	if (idade_media <= 25)
	{
		printf("\nTurma jovem!\n");

	}
	else
	{
		if (idade_media <= 60)
		{
			printf("\nTurma Adulta\n");
		}
		else
		{
			printf("\nTurma Idosa\n");
		}
	}
	return 0;
} 
