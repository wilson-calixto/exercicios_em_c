/*
*Autor: Jackson Kelvin de Souza
*/
//ler oq ja foi escrito
#include <stdio.h>
struct cadastro
{
	char codigo[15], nome[15], endereco[15];
};
int main(int argc,char const *argv[])
{
	FILE *file;
	file = fopen("Agenda.txt","r");
	if(file==NULL)
	{
		printf("erro!\n");
		return 0;
	}
	struct cadastro contatos[3];
	while (fgets(contatos,3,file) != NULL)
	{
		printf("%s", contatos);
	}
	
	fclose(file);

	return 0;
}
