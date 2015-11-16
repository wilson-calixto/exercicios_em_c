#include <stdio.h>

void load_maze(char maze[23][30], char path)
{
char ch;
int i=0,j=0;
FILE *fp;
  fp = fopen("maze.txt","r" );
  if(fp == NULL)
        printf("Erro, nao foi possivel abrir o arquivo\n");
  else
  {
        while( (ch=fgetc(fp))!= EOF )
        {
                if (ch != '\n')
                {
                        maze[i][j] = ch;
                        j++;
                }else
                {
                        j = 0;
                        i++;
                }
        }
  }
  fclose(fp);
}
