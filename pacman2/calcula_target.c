#define COLUNA 1
#define LINHA 0
void calcula_target(int red[3],int pacman[3],int target[2])
{
	target[LINHA]=(pacman[LINHA] - red[LINHA]) + pacman[LINHA];
        target[COLUNA]=(pacman[COLUNA] - red[COLUNA]) + pacman[COLUNA];
}
