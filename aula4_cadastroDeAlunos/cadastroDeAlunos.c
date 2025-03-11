#include <stdio.h>

int main () {

    char nome[100] = "";
    int idade, matricula = 0;
    float altura = 0;

    printf("Cadastro de alunos no sistema mais foda de todos os tempos \n");

    printf("\nDigite o nome do seu aluno: ");
    scanf("%s", nome);

    printf("\nDigite a matricula do seu aluno: ");
    scanf("%d", &matricula);

    printf("\nDigite a idade do seu aluno: ");
    scanf("%d", &idade);

    printf("\nDigite a altura do seu aluno: ");
    scanf("%f", &altura);

    printf("\n-------------------------------------\n");
    printf("\nCadastro realizado com sucesso! \n");
    printf("\nDados do aluno:\n");
    printf("Nome: %s \n", nome);
    printf("Matricula: %d \n", matricula);
    printf("Idade: %d \n", idade);
    printf("Matricula: %.2f \n", altura);
    
    return 0;

}