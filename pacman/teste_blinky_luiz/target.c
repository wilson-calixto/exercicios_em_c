#include <stdio.h>
#include <math.h>
#define R 19
#define C 23

int distance( int pac_x, int pac_y, int blinky_x, int blinky_y ) {

	int x, y, d;

	x = pac_x - blinky_x;
	y = pac_y - blinky_y;
	d = pow( x, 2 ) + pow( y, 2 );
	d = pow( d , 0.5 );

	return d;
}

int search_x( char maze[][23], char character ) {

	int i, j;

	for( i = 0; i < R; i++ ) {
		for( j = 0; j < C; j++ ) {
			if( maze[i][j] == character )
				return i;
		}
	}
}

int search_y( char maze[][23], char character ) {

	int i, j;

	for( i = 0; i < R; i++ ) {
		for( j = 0; j < C; j++ ) {
			if( maze[i][j] == character )
				return j;
		}
	}
}

/*void better_way_x( char maze[][23], int pac_x, int pac_y, int blink_x, int blink_y ) {

	distance( search_x( maze, 'o' ), search_y( maze, 'o' ), search_x( maze, 'B' ), search_y( maze, 'B' ) ); */
