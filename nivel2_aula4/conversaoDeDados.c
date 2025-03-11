#include <stdio.h>

int main (){


    // NUMEROS INTEIROS
    int a = 10;
    int b = 3;
    int soma = a + b;
    int diferenca = a - b;
    int produto = a * b;
    int quociente = a / b;

    printf("Soma: %d\n", soma);
    printf("Diferença: %d\n", diferenca);
    printf("Produto: %d\n", produto);
    printf("Quociente: %d\n", quociente);

    // NUMEROS DECIMAIS
    float x = 5.5;
    float y = 2.2;
    float somaF = x + y;
    float diferencaF = x - y;
    float produtoF = x * y;
    float quocienteF = x / y; // Divisão de ponto flutuante
 
    printf("Soma: %.2f\n", somaF);
    printf("Diferença: %.2f\n", diferencaF);
    printf("Produto: %.2f\n", produtoF);
    printf("Quociente: %.2f\n", quocienteF);

    return 0;

}