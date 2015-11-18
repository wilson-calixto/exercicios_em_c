#define COLUNA 1
#define LINHA 0
void calcula_target(int red[3],int pacman[3],int target[2])
{
	target[0]=(pacman[0] - red[0]) + pacman[0];
       target[1]=(pacman[1] - red[1]) + pacman[1];
}
