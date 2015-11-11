#include <stdio.h>
#include "io_blinky.h"
#include "target.h"
#define R 23
#define C 19

int main( int argc, const char *argv[] ) {

	int maze[R][C];
	int x, y;

 	fill( maze, -10, input_y(), input_x() );
	print( maze );

	return 0;
}
