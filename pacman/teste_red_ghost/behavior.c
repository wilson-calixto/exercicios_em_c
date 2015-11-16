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

void move_blinky( int maze[R][C], int pac_x, int pac_y, int blinky_x, int blinky_y ) {

	float right, left, up, down;

	fill( maze, -10, pac_x, pac_y );
	fill( maze, -7, blinky_x, blinky_y );

	print( maze );

	while( maze[blinky_x][blinky_y] != -10 ) { 

		right = distance( pac_x, pac_y, blinky_x, blinky_y + 1 );
		left = distance( pac_x, pac_y, blinky_x, blinky_y - 1 );
		up = distance( pac_x, pac_y, blinky_x - 1, blinky_y );
		down = distance( pac_x, pac_y, blinky_x + 1, blinky_y );

		if( maze[ blinky_x ][ blinky_y + 1 ] != 0 && right < left && right < up && right < down )
			blinky_y++; 
		
		if( maze[ blinky_x ][ blinky_y - 1 ] != 0 && left < right && left < up && left < down )
			blinky_y--;

		if( maze[ blinky_x - 1 ][ blinky_y ] != 0 && up < right && up < left && up < down )
			blinky_x--;

		if( maze[ blinky_x + 1 ][ blinky_y ] != 0 && down < right && down < left && down < up )
			blinky_x++;
		
		if( maze[ blinky_x - 1][ blinky_y ] != 0 && up == right && up == left && up == down )
			blinky_x--;
  		
		if( maze[ blinky_x ][ blinky_y - 1 ] != 0 && left == right && left == down )
			blinky_y--;

		if( maze[ blinky_x + 1 ][ blinky_y ] != 0 && down == right )
			blinky_x++;

		if( maze[ blinky_x ][ blinky_y ] != -10 )
			fill( maze, -7, blinky_x, blinky_y );

		}
	
	fill( maze, -5, pac_x, pac_y ); 
	puts( "\n" );
}
