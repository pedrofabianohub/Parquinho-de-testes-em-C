#include <stdio.h>

int main (){

    float nota1, nota2 = 0;
    float media = 0;

    printf("*** Programa de calculo de media ***\n");

    printf("\nDigite a sua primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a sua segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("A media é: %.1f", media);

    return 0;

}