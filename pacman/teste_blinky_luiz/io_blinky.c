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

int input_x( void ) {

	int x;

	printf( "Digite a coordenada x: " );
	scanf( "%d", &x );

	return x;
}

int input_y( void ) {

	int y;

	printf( "Digite a coordenada y: " );
	scanf( "%d", &y );

	return y;
}

void fill( int maze[R][C], int character, int x, int y ) {
	
	maze[x][y] = character;
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
			}
		}
		printf( "\n" );
	}
	puts( "\n" );
}
