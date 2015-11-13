#include <stdio.h>
#include <stdio.h>
#define R 23
#define C 19

void input( int maze[R][C] ) {

	int i, j;

	for( i = 0; i < R; i++ ) {
		for( j = 0; j < C; j++ ) {
			scanf( "%d", &maze[i][j] );
		}
	}
}

void print( int maze[R][C] ) {

	int i, j;

	for( i = 0; i < R; i++ ) {
		for( j = 0; j < C; j++ ) {

			switch( maze[i][j] ) {

				case 0: 
					putchar( '=' );
					break;
				case 1: 
					putchar( ' ' );
					break;
				case 7: 
					putchar( ' ' );
					break;
				case -10: 
					putchar( 'P' );
					break;
			}
		}
		printf( "\n" );
	}
	puts( "\n" );
}

/* WILSON CALIXTO : FALTA TREANFORMARA MATRIZ EM TXT E CHAMAR A FUNCAO WALKING 
OBS: PREFERI FAZER O VETOR TARGET COMO GLOBAL PARA FACILITAR A FORMA DE DEBUGAR */
int target[2];
int main ( int argc, const char *argv[] )
{
int maze[R][C];
input( maze[][] );
print(maze[][] );
  return 0;
}
