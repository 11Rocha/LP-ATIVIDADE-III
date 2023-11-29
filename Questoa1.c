#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{

    setlocale(LC_ALL, "portuguese");

    char nome[5][250];
    int idade[5];
    float peso[5];
    float altura[5];
    float maiorAltura = 0;
    float menorAlruta = 999999;
    float maiorPeso = 0;
    float menorPeso = 99999;
    int maiorIdade = 0;
    int menorIdade = 99999;

    int a;

    for (a = 0; a < 5; a++)
    {
        printf("Informe o Nome:\n");
        scanf("%s", &nome[a]);

        printf("Informe sua Idade:\n");
        scanf("%d", &idade[a]);

        printf("Informe o Peso:\n");
        scanf("%f", &peso[a]);

        printf("Informe sua Altura:\n");
        scanf("%f", &altura[a]);

        maiorAltura = altura[a] > maiorAltura ? altura[a] : maiorAltura;
        menorAlruta = altura[a] < menorAlruta ? altura[a] : menorAlruta;

        maiorPeso = peso[a] > maiorPeso ? peso[a] : maiorPeso;
        menorPeso = peso[a] < menorPeso ? peso[a] : menorPeso;

        maiorIdade = idade[a] > maiorIdade ? idade[a] : maiorIdade;
        menorIdade = idade[a] < menorIdade ? idade[a] : menorIdade;
        fflush(stdin);
    }

    printf("A Maior Altura: %.1f \n", maiorAltura);
    printf("A Menor Altura: %.1f \n", menorAlruta);
    printf("O Maior e Peso: %.1f \n", maiorPeso);
    printf("O Menor Peso: %.1f \n", menorPeso);
    printf("A Maior Idade: %d \n", maiorIdade);
    printf("A Menor Idade: %d \n", menorIdade);

    return 0;
}