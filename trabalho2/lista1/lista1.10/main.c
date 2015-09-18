#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"funcao.h"//arquivo que contem as informações da função rolldice ();
 int main(int argc,const char *argv[])
{
 int gamestatus,sm,meuponto;

srand (time(NULL));
sm = rolldice();/*primeira jogada dos dados*/

switch (sm)
{

   case 7:
   case 11:/*vence na primeira jogada*/
          gamestatus =1;
          break;
    case 2:
    case 3:
    case 12:/*perde a primeira rodada*/
           gamestatus =2;
           break;
 default:/*Armazena dados do jogo*/

        gamestatus = 0;
        meuponto = sm;
        printf("O ponto é %d\n",meuponto);
   break;
}

 while (gamestatus==0)
{
 sm = rolldice ();

 if (sm == meuponto)
     gamestatus = 1;/*vence fazendo ponto*/
   else
       if (sm == 7) /* perde obtendo um valor 7*/
           gamestatus = 2;

}

   if (gamestatus == 1)

     printf ("Jogador vence \n");
   else
   printf("Jogador perde \n");


}

                                                                                                          

