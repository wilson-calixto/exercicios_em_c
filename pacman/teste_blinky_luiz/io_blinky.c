#include <stdio.h>

int i, j;

void input( char maze[19][23], int rows, int cols ) {

	for( i = 0; i < rows; i++ ) {
		for( j = 0; j < cols; j++ ) {
			scanf( "%c", &maze[i][j] );
		}
	}
}

int input_x() {

	int x;

	scanf( "%d", &x );

	return x;
}

int input_y() {

	int y;

	scanf( "%d", &y );

	return y;
}

void print( char maze[19][23], int rows, int cols ) {

	for( i = 0; i < rows; i++ ) {
		for( j = 0; j < cols; j++ ) {
			printf( "%c", maze[i][j] );
		}
	}
}
