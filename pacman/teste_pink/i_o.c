#include <stdio.h>

int in(int entrada)
{

        scanf("&d",entrada);

        return entrada;
}


void out(int id, int extra)
{

        switch(id)
         {
                case 1: printf("    ");
                        break;
                case 2: printf("\n");
                        break;
                case 3: printf("Qual a posição do GHOST? (x,y)\n");
                        break;
                case 4: printf("x: ");
                        break;
                case 5: printf("y: ");
                        break;
                case 6: printf("Ghost: ");
                        break;
                case 7: printf("%d ", extra);
                        break;
                case 8: printf("%d  ", extra++);        
                        break;         
         }
}
