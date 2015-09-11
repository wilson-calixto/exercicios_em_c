 /*Essa função calcula o peso ideal da pessoa com base na sua altura e sexo */
void ideal_weight()
{
    int sexo; /* variavel do tipo int para armazenar a informação sobre o sexo da pessoa */
    float peso, altura; /*E variaveis do tipo float para armazenar as informaçoes de peso, no caso o peso ideal que será calculado, e de altura */
    printf("Informe a altura: ");
    scanf("%f", &altura);
    printf("1 -- Homem\n2 -- Mulher\n");
    printf("Informe o sexo: ");
    scanf("%d", &sexo);
    if (sexo == 1)
    {
        peso = ((72.7*altura) - 58); /* Calculo do peso ideal para homens */
    }
    if (sexo == 2)
    {
        peso = ((62.1* altura) - 44.7); /*Calculo do peso ideal para mulheres */
    }
    printf("%.2f\n", peso); /*  a funçao retorna a variavel peso como o peso ideal para o sexo e peso da pessoa */
}
