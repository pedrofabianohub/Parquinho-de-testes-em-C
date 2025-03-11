/*

PERCENTUAIS SÃO NECESSÁRIOS PARA QUE A LINGUAGEM IMPRIMA OS DADOS PEDIDOS

%d: Imprime um inteiro no formato decimal.
 
%i: Equivalente a %d.
 
%f: Imprime um número de ponto flutuante no formato padrão.
 
%e: Imprime um número de ponto flutuante na notação científica.
 
%c: Imprime um único caractere.
 
%s: Imprime uma cadeia (string) de caracteres.

ATENÇÃO: ---> Você precisa sempre colocar o caractere “&” antes de cada variável que será lida. <---
*/

#include <stdio.h>

int main () {

    char nome[50] = "";
    char habilidades[5];
    int idade = 0;
    float altura = 0;
    double peso = 0;

    printf("Cadastro pica das galáxias \n");
    printf("Digite seu nome:");
    scanf("%s", nome);
    printf("Digite sua idade:");
    scanf("%d", &idade);
    printf("Digite sua altura:");
    scanf("%f", &altura);

    printf("Olá %s, hoje é seu aniversário, parabéns!!! Você completou: %d anos\n", nome,idade);
    printf("Você cresceu muitooooo, você já tem %.2f m de altura\n", altura);

}