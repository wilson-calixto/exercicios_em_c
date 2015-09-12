/* 
 *  Programação de Computadores e Algoritmos
 *  Trabalho 2
 *  Questão 2.13
 *  Equipe: Benjamin Borges
 *  Davi Tavares
 *  Paulo Henrique 
 *  Fernando Calderaro
 *  Lucas Frota
 *  Luiz Fernando
 *  
 *  */
 
/* #include	"../../util.c/util.h" */
#include <stdio.h>

int main( int argc, const char *argv[] ) 
{
	
	float a, b, c;
	
	printf( "Informe o lado A do triangulo: " );
	scanf( "%f", &a );
	printf( "Informe o lado B do triangulo: " );
	scanf( "%f", &b );
	printf( "Informe o lado C do triangulo: " );
	scanf( "%f", &c );
	
	if( triangle( a, b, c ) == 2 ) 
	{
		printf( "Nao eh triangulo\n" );
	}
	else if( triangle( a, b, c ) == 3 ) 
	{
		printf( "Triangulo equilatero\n" );
	}
	else if( triangle( a, b, c ) == 4 ) 
	{
		printf( "Triangulo isosceles\n" );
	}
	else if( triangle( a, b, c ) == 5 ) 
	{
		printf( "Triangulo escaleno\n" );
	}
	
	return 0;
}
