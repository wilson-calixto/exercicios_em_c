#include <stdio.h>

int main(int argc, const char *argv[])
{
	int y, *p, x;
	y=0;//Y recebe 0
	p=&y;//A Variavel P recebe o endereço de Y
	x=*p;//X recebe o que P estava apontando
	x=4;//X recebe 4
	(*p)++;//O que P estava apontando recebe Y
	x--;//X descrementa
	(*p)+=x;//O P vai incrementar o Y com o valor de X
	
	printf("y = %d\n", y);
	return(0);
}
