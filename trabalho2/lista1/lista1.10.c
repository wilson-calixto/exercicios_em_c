/*+++++++++++++++++++++++++++++++++++++++++++++++++++
+ Programacao de Computadores e Algoritmos          +
+ Trabalho 2                                        +
+ Questão 1.10                                      +
+                                                   +
+Equipe:                                            +
+	Evandro Fernandes                           +
+	Jackson Gomes                               +
+	Jéssica Kelly                               +
+	Paulo Marinho                               +
+	Robson Borges	                            +
+	Rodrigo Oliveira                            +
+       Autor(A):Jéssica kelly                      +
+++++++++++++++++++++++++++++++++++++++++++++++++++*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int rolldice (void);
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


/* Fumção randomiza o lançamento de um dado */
int rolldice (void)
{
int die1,die2,work_sm;

die1 = 1+(rand()%6);
die2 = 1+(rand()%6);

work_sm  = die1+die2;

printf("jogador obteve %d+%d = %d\n",die1,die2,work_sm);
return work_sm;
}

































