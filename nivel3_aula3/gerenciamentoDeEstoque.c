#include <stdio.h>

int main () {

    char produto1[50] = "Monitor";
    char produto2[50] = "Cadeira Gamer 2000";

    unsigned int estoqueProduto1 = 1000;
    unsigned int estoqueProduto2 = 2000;

    float valorProduto1 = 10.50;
    float valorProduto2 = 20.40;

    unsigned int estoqueMinProduto1 = 500;
    unsigned int estoqueMinProduto2 = 2500;

    double valorTotalProduto1;
    double valorTotalProduto2;

    int resultadoProduto1, resultadoProduto2;

    printf("Produto %s custa R$%.2f e tem %u no estoque \n", produto1, valorProduto1, estoqueProduto1);
    printf("Produto %s custa R$%.2f e tem %u no estoque \n", produto2, valorProduto2, estoqueProduto2);

    // comparacao com o valor min de estoque

    resultadoProduto1 = estoqueProduto1 > estoqueMinProduto1;
    resultadoProduto2 = estoqueProduto2 > estoqueMinProduto2;

    printf("O produto %s tem estoque minimo? %d \n", produto1, resultadoProduto1);
    printf("O produto %s tem estoque minimo? %d \n", produto2, resultadoProduto2);

    // comparacao entre os valores totais dos produtos

    printf("Valor total do produto 1 (R$ %.2f) é maior que o valor total do produto 2 (R$ %.2f)? %d\n", (estoqueProduto1 * valorProduto1), (estoqueProduto2 * valorProduto2), (estoqueProduto1 * valorProduto1) > (estoqueProduto2 * valorProduto2));

    return 0;
}