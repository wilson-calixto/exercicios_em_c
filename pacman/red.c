#define C 30
#define L 23 

void move_blink(char maze[L][C], int pacman_x , int pacman_y, int blink_x, int blink_y, char d)
{
     if(blink_x > pacman_x && (validate_position(maze, blink_x-1, blink_y) && d==v)
     {
        blink_x = blink_x-1;
        maze[blink_x][blink_y] = 5;
     }
     else 
     {
         if(blink_x < pacman_x && (validate_position(maze, blink_x+1, blink_y) && d==v)
         {

         }

     }
}
int check_way(char maze[L][C], int *caminho1, int *caminho2)
{


}


int validate_position(char maze[L][C], int x, int y)
{

    if (maze[y][x]==' ' || maze[y][x] == '6' || maze[y][x] == '7')
    {
         return 1;
    }
    else
    {
         return 0;
    }

}
      
