#include <stdio.h>


void trocar (int *p, int *q)
{
   int temp;
   temp = *p; *p = *q; *q = temp;
}

int main(int argc, const char *argv[])
{
	int i = 5;
	int j = 6;

	int *p;
	int *q;

	p = &i;
	q = &j;

	printf("i= %d\n", i);
	printf("j= %d\n", j);


	printf("trocando i por j...\n");

	trocar(p,q);

	printf("i= %d\n", i);
	printf("j= %d\n", j);


	return 0;
}
