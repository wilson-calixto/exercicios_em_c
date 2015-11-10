#include <stdio.h>
#define R 19
#define C 23

int i, j;

void input( char maze[R][C], int rows, int cols ) {

	for( i = 0; i < rows; i++ ) {
		for( j = 0; j < cols; j++ ) {
			scanf( "%c", &maze[i][j] );
		}
	}
}

int input_x() {

	int x;

	printf( "Digite a coordenada x: " );
	scanf( "%d", &x );

	return x;
}

int input_y() {

	int y;

	printf( "Digite a coordenada y: " );
	scanf( "%d", &y );

	return y;
}

void fill( char maze[R][C], char character, int x, int y ) {
	
	maze[x][y] = character;
}
			
void print( char maze[19][23], int rows, int cols ) {

	for( i = 0; i < rows; i++ ) {
		for( j = 0; j < cols; j++ ) {
			printf( "%c", maze[i][j] );
		}
	}
}
