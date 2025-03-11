#include <stdio.h>
 
float nota1 = 0;
float nota2 = 0;
float media = 0;

void entradaDados() {

    printf("Calculador de média\n");

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);

    printf("Digite a nota 2: ");
    scanf("%f", &nota2);

}
 
// Função genérica para cálculo da média
float calcularMedia() {
    
    media = (nota1 + nota2) / 2;

}
 
// Função genérica para exibir dados
void exibirMedia() {

    printf("Sua média é %.2f", media);

}
 
int main() {
 
    entradaDados();
    calcularMedia();
    exibirMedia();
    return 0;
    
}