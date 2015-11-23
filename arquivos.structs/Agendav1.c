//Autor: Jackson Kelvin de Souza
//lendo aquivo de testo simples
//numeros
//"r"
//neste algoritmo precisar criar um txt manualmente com os valores para poder ler.
//porisso uso do scanf
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char const *argv[])
{
	FILE *file;
	file =fopen("Agendav1.txt", "r");
	
	if (file==NULL)
	{
		printf("arquivo não pode ser aberto\n");
		return 0;
	}
	
	int x,y,z;
	fscanf(file, "%d  %d %d", &x, &y, &z);
	printf("1: %d\n2: %d\n3: %d\n", x, y, z);
	
	fclose(file);
	
	return 0;
}
