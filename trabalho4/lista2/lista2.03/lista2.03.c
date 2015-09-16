#include <stdio.h>
#include <dice.h>
#include <cd/pca/trabalho2/util.c>
int main(int argc, const char *argv[])
{
	int lancamento, i, arm=0;
	for (lancamento=0; i < lancamento; i++)
	{
		arm += dice();
		printf("%d", arm);
	}

}
// codigo ainda em construção -- Hermann.

