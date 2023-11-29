#include <stdio.h>

int main()
{
    int numeros[5];
    int i;
    int quantidadeImpares = 0, quantidadeNegativos = 0;
    int maior, menor, somaPares = 0, quantidadePares = 0, somaTotal = 0;

    
    for (i = 0; i < 5; i++)
    {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);

   
        if (numeros[i] % 2 != 0)
        {
            quantidadeImpares++;
        }

        
        if (numeros[i] < 0)
        {
            quantidadeNegativos++;
        }

      

        if (i == 0 || numeros[i] > maior)
        {
            maior = numeros[i];
        }

        
        
        
        if (i == 0 || numeros[i] < menor)
        {
            menor = numeros[i];
        }

        
        if (numeros[i] % 2 == 0)
        {
            somaPares += numeros[i];
            quantidadePares++;
        }

        
        somaTotal += numeros[i];
    }

 

    printf("\nQuantidade de números ímpares: %d\n", quantidadeImpares);
    printf("Quantidade de números negativos: %d\n", quantidadeNegativos);
    printf("Maior número: %d\n", maior);
    printf("Menor número: %d\n", menor);

    

    if (quantidadePares > 0)
    {
        double mediaPares = (double)somaPares / quantidadePares;
        printf("Média de números pares: %.2lf\n", mediaPares);
    }

    else
    {
        printf("Nenhum número par foi inserido.\n");
    }

    
    double mediaTotal = (double)somaTotal / 5;
    printf("Média de números inseridos: %.2lf\n", mediaTotal);

    return 0;
}