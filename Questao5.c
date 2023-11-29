#include <stdio.h>

#define MAX_VENDAS 100

struct Venda
{
    char nome_produto[50];
    double preco;
    int quantidade;
};

int main()
{
    struct Venda vendas[MAX_VENDAS];
    int total_vendas = 0;
    int escolha;

    while (1)
    {
        printf("\n1 - Adicionar Venda\n");
        printf("2 - Finalizar e Exibir Total de Vendas\n");

        printf("Escolha uma opção (1/2): ");
        scanf("%d", &escolha);

        switch (escolha)
        {
        case 1:
            if (total_vendas < MAX_VENDAS)
            {
                printf("Digite o nome do produto: ");
                scanf("%s", vendas[total_vendas].nome_produto);
                printf("Digite o preço do produto: ");
                scanf("%lf", &vendas[total_vendas].preco);
                printf("Digite a quantidade vendida: ");
                scanf("%d", &vendas[total_vendas].quantidade);

                total_vendas++;

                total_vendas++;

                printf("Venda registrada com sucesso!\n");
            }
            else
            {
                printf("Número máximo de vendas atingido.\n");
            }
            break;

        case 2:
            printf("\nTotal de Vendas:\n");
            double total_geral = 0.0;
            for (int i = 0; i < total_vendas; i++)
            {
                double total_venda = vendas[i].preco * vendas[i].quantidade;
                printf("Produto: %s, Preço: %.2lf, Quantidade: %d, Total: %.2lf\n",
                       vendas[i].nome_produto, vendas[i].preco, vendas[i].quantidade, total_venda);
                total_geral += total_venda;
            }

            
            printf("Total Geral de Vendas: %.2lf\n", total_geral);
            return 0;

        default:
            printf("Opção inválida. Tente novamente.\n");
        }
    }

    return 0;
}