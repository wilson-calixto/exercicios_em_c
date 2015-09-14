#include<stdio.h>

void city()
{
    int per, mediasal, mediafilhos, cont, contsal, contfilhos, sal, filhos, continua, maiorsal, contper, resposta;
    
    cont=0;
    contsal=0;
    contfilhos=0;
    continua = 1;
    maiorsal = 0;
    contper=0;
    while (continua=1)
    {
        printf("salario:\n");
        scanf("%d",&sal);
        contsal=contsal+sal;
        

        if(sal>maiorsal)
        {
            maiorsal=sal;
        }

        if(sal<=350)
        {
            contper++;
        }
       
        
        printf("filhos:\n");
        scanf("%d",&filhos);
        contfilhos = contfilhos+filhos;
     
        printf("continuar? 1 ou 0\n");
        scanf("%d",&resposta);
        cont++;

        if(resposta == 0)
        {
            continua = 0;
        }
    }
    
    mediasal=contsal/cont;
    mediafilhos=contfilhos/cont;
    per=contper/100;
    
    printf("%d",mediafilhos);
    printf("%d",mediasal);       
    printf("%d",maiorsal);       
    printf("%d",per);       
}

