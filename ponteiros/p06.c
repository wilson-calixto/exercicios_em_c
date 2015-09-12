//p06.c
#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char *argv[])
{
	int *vetor;
	int *p;
	
	vetor = (int*) malloc( sizeof(int) * 5 );
	
	vetor[3] = 6;
	p = vetor;
	
	*p = 7;
	p++;
	
	*p = 8;
	
	printf("%p\n", p);
	printf("%d\n", *p);
	
	p--;

	free(p);

	return 0;
}

