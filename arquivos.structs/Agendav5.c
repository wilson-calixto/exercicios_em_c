//Autor: Jackson Kelvin de Souza
//copiando de um txt para outro txt.
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char const *argv[])
{
	void copiar (FILE *file1,FILE *file2);

	FILE *file1;
	file1 =fopen("agendav3.txt", "r");

	FILE *file2;
	file2 =fopen("Agendav5.txt", "w");
	
	copiar(file1,file2);
	
	fclose(file1);
	fclose(file2);
	return 0;
}

void copiar (FILE *file1,FILE *file2)
{
	char infos[100];
	while (fgets(infos,100,file1) != NULL)
	{
		fputs(infos,file2);
	}
}
