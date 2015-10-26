#include <stdio.h>
#include <stdlib.h>

char ** jogada (char **mat, int pos, int jogador)
{
    char **resp = malloc(3 * sizeof(char));
    int i, j, cont = 1;
    char arm;

    for (i = 0; i < 3; i++)
    {
        resp[i] = malloc(3 * sizeof(char));
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (pos != cont)
            {
                resp[i][j] = mat[i][j]; 
            }
            else
            {
                if (mat[i][j] == 'X' || mat[i][j] == 'O')
                {
                    resp [0][0] = ' ';   
                }
                else
                {
                    if (jogador == 1)
                        resp[i][j] = 'X';
                    else
                        resp[i][j] = 'O';
                }
            }
            cont++;
        }
    }


    return resp;
}

int fim(char **mat)
{
    int i, j, final = 0, cont1 = 0, cont2 = 0;
    char arm1, arm2;
    
    for (i = 0; i < 3; i++)
    {
        arm1 = mat[i][0];
        arm2 = mat[0][i];
        for (j = 0; j < 3; j++)
        {
            if (mat[i][j] == arm1)
            {
                cont1++;
            }
            if (mat[j][i] == arm2)
            {
                cont2++;
            }
            if (cont1 == 3)
            {
                if (arm1 == 'X')
                    return 1;
                else
                    return 2;
            }
            if (cont2 == 3)
            {
                if (arm2 == 'X')
                    return 1;
                else
                    return 2;
            }
        }
        //printf("cont1 = %d\n", cont1);
        //printf("cont2 = %d\n", cont2);
        cont1 = 0;
        cont2 = 0;
    }
    
    arm1 = mat[0][0];

    if (arm1 == mat[1][1] && arm1 == mat[2][2])
    {
        if (arm1 == 'X')
            return 1;
        else
            return 2;
    }

    arm1 = mat[0][2];

    if (arm1 == mat[1][1] && arm1 == mat[2][0])
    {
        if (arm1 == 'X')
            return 1;
        else 
            return 2;
    }

    return 0;
}


int show_menu()
{
    int jogs = 0;

    while (jogs == 0)
    {
        system("clear");

        printf("******* JOGO DA VELHA *******");
        printf("\n\n1. 1 jogador\n2. 2 jogadores\n3. Sair\n");
        scanf("%d", &jogs);

        if (jogs == 1)
        {
            printf("Dificuldade: \n1. Facil\n2. Dificil\n");
            scanf("%d", &jogs);

            if (jogs == 2)
                jogs = 4;
        }
    }
    return jogs;
}

void show_tab(char ** matriz)
{
    int i, j;
	
    system("clear");

    printf("   |   |\n %c | %c | %c\n___|___|___\n   |   |\n %c | %c | %c\n___|___|___\n   |   |\n %c | %c | %c\n   |   |\n",matriz[0][0],matriz[0][1],matriz[0][2],matriz[1][0],matriz[1][1],matriz[1][2],matriz[2][0],matriz[2][1],matriz[2][2]);	

}

char int_to_char(int i)
{
    char c;
    switch (i)
    {
        case 1:
            return '1';
        case 2:
            return '2';
        case 3:
            return '3';
        case 4:
            return '4';
        case 5:
            return '5';
        case 6:
            return '6';
        case 7:
            return '7';
        case 8:
            return '8';
        case 9:
            return '9';
        case 0:
            return '0';
        default:
            return '\0';
    }

}
