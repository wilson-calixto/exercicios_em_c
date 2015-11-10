#include <stdio.h>
#include "io_blinky.h"
#include "target.h"
#define R 19
#define C 23

int main( void ) {

	char maze[R][C];

	input( maze, 19, 23 );
	print( maze, 19, 23 );
	fill( maze, 'P', 9, 9 );
	printf( "(%d,%d)\n", search_x( maze, 'P' ), search_y( maze, 'P' ) );
	
	return 0;
}
