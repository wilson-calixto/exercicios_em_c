#include <stdio.h>
#include <math.h>
#define R 23
#define C 19

int distance( int pac_x, int pac_y, int blinky_x, int blinky_y ) {

	int x, y, d;

	x = pac_x - blinky_x;
	y = pac_y - blinky_y;
	d = pow( x, 2 ) + pow( y, 2 );
	d = pow( d , 0.5 );

	return d;
}

int search_x( char maze[][C], char character ) {

	int i, j;

	for( i = 0; i < R; i++ ) {
		for( j = 0; j < C; j++ ) {
			if( maze[i][j] == character )
				return i;
		}
	}
}

int search_y( char maze[][C], char character ) {

	int i, j;

	for( i = 0; i < R; i++ ) {
		for( j = 0; j < C; j++ ) {
			if( maze[i][j] == character )
				return j;
		}
	}
}

void move_blinky( int maze[R][C], int x, int y ) {

	int i;
	
	for( i = y + 1; maze[x][i] != 7; i++ ) {
		printf( "%d %d\n", i, x );
	}
	fill( maze, -7, x, i );

	puts( "\n" );
}
