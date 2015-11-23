/*
*Autor: Jackson Kelvin de Souza
*/
//escrevr no txt diretodo codigo/não interativo
#include <stdio.h>

int main(int argc,char const *argv[])
{
	char codigo[15]="1515310012";
	char nome[15]="jackson";
	char endereco[15]="69017-330";
	FILE *file;
	file = fopen("agendav6.txt","w");
	if(file==NULL)
	{
		printf("erro!\n");
		return 0;
	}
	fprintf(file,"codigo:%s\tnome:%s\tendereco:%s\n",codigo,nome,endereco);
	fclose(file);

	return 0;
}
