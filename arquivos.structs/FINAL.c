/*
*Autor: Jackson Kelvin de Souza
*/
#include <stdio.h>
#include <stdlib.h>
struct cadastro
{
	char codigo[15],nome[15],endereco[15];
};
int main(int argc,char const *argv[])
{
	FILE *file;
	file = fopen("AGENDAFINAL.txt","w");
	if(file==NULL)
	{
		printf("erro!\n");
		return 0;
	}
	struct cadastro agenda[3]={"1515310012","jackson","rua 28","\n2255975261","rai santos","rua 00","\n1479325874","richardson","rua paraiso\n"};
	fwrite(&agenda,sizeof(struct cadastro),3,file);
	
	fclose(file);
	return 0;
}
