#include<stdio.h>

int main(int argc, const char *argv[])
{
	char nome[20], endereco[50],cep[10],telefone[10];
	printf("Digigte seu nome: \n");
	scanf("%s", nome);
	printf("Digite seu endereço: \n");
	scanf("%s", endereco);
	printf("Digite seu cep: \n");
	scanf("%s", cep);
	printf("Digite seu telefone: \n");
	scanf("%s", telefone);
	printf("Nome: %s\n",nome);
	printf("Endereco: %s\n",endereco);
	printf("Cep: %s\n",cep);
	printf("Telefone: %s\n",telefone);
	return 0;
}
