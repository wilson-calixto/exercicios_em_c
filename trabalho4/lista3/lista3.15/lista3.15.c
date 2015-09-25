#include <stdio.h>
#include <stdlib.h>
#include "p.h"

int main(int argc, const char *argv[])
{
	int ordem;
	int M[100][100];
	
	matriz(M, &ordem);
	teste_permutacao(M, ordem);
	return 0;
}

