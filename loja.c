#include <stdlib.h>
#include <stdio.h>

int main()
{
    char nomeProduto[50];
    int quantidade, op;
    float precoUnitario, valorTotal = 0, valorTotalDia = 0;

    do {

        printf("\nDigite o nome do produto: ");
        scanf(" %[^\n]", nomeProduto);

        printf("Digite a quantidade vendida: ");
        scanf("%d", &quantidade);

        printf("Digite o preço unitário do produto: ");
        scanf("%f", &precoUnitario);

        valorTotal = quantidade * precoUnitario;
        printf("Valor total da venda de %s: %.2f\n", nomeProduto, valorTotal);

        valorTotalDia = valorTotalDia + valorTotal;

        printf("\n1- Realizar outra venda\n");
        printf("2- Finalizar o dia\n");
        printf("Digite a opcao: ");
        scanf("%d", &op);

    } while (op == 1);

    printf("\n\nValor total arrecadado no dia: %.2f\n", valorTotalDia);

    return 0;
}
