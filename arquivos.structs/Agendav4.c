//Autor: Jackson Kelvin de Souza
//adiconando/anexando e ler informações em arquivos ja criados.
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char const *argv[])
{
	FILE *file;
	file =fopen("agendav3.txt", "a");
	fprintf(file,"jackson kelvin de souza\n");
	fclose(file);
	
	file =fopen("Agendav3.txt", "r");
	
	if (file==NULL)
	{
		printf("nao foi possivel abrir o arquivo\n");
		return 0;
	}
	
	char nome[100];
	while (fgets(nome,100,file) != NULL)
	{
		printf("%s", nome);
	}
	
	fclose(file);
	
	return 0;
}
