/*
*Autor: Jackson Kelvin de Souza
*/
//ler oq ja foi escrito
#include <stdio.h>
struct agenda
{
	char codigo[15], nome[15], endereco[15];
};
int main(int argc,char const *argv[])
{
	FILE *file;
	file = fopen("agendasimples.txt","rb");
	if(file==NULL)
	{
		printf("erro!\n");
		return 0;
	}
	struct agenda cad={"1515310012","jackson k.s","rua 28"};
	fread(&cad,sizeof(struct agenda),1,file);
	printf("%s\n%s\n%s\n",cad.codigo,cad.nome,cad.endereco);
	fclose(file);

	return 0;
}
