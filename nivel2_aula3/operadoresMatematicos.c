/*

Soma +
Subtração -
Multiplicação *
Divisão /

*/

#include <stdio.h>

int main () {

    int n1 = 0;
    int n2 = 0;

    printf("Digite o primero numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    
    int soma = n1 + n2;
    int sub = n1 - n2;
    int mult = n1 * n2;
    int div = n1 / n2;

    printf("Resultado de %d + %d é igual a: %d \n", n1,n2,soma);
    printf("Resultado de %d - %d é igual a: %d \n", n1,n2,sub);
    printf("Resultado de %d * %d é igual a: %d \n", n1,n2,mult);
    printf("Resultado de %d / %d é igual a: %d \n", n1,n2,div);


}
