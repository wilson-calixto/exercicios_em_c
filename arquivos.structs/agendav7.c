/*
*Autor: Jackson Kelvin de Souza
*/
//ler oq ja foi escrito
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char const *argv[])
{
	FILE *file;
	file = fopen("agendav6.txt","r");
	
	if(file==NULL)
	{
		printf("erro!\n");
		return 0;
	}
	
	char codigo[20], nome[20],endereco[20];
	fscanf(file,"%s %s %s",codigo,nome,endereco);
	printf("%s\n%s\n%s\n",codigo,nome,endereco);
	fclose(file);

	return 0;
}
