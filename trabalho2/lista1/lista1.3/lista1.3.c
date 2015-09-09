#include<stdio.h>
#include<stdlib.h>
#include"funcoes.h"
int main(int argc, const char* argv[])
{
	int n1, n2;
	printf("Digite o primeiro numero:");
	scanf("%d",&n1);
	printf("Digite o segundo numero:");
	scanf("%d",&n2);
	printf("%d \n",soma(n1,n2));	
	return 0;
}
