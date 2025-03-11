#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Pedro Fabiano Vieira dos Santos

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    typedef struct // Criei uma estrutura para que não fosse necessário criar uma variável única para cada carta
    {
        char estado[2];
        char codigoEstado[5];
        char nomeCidade[50];
        int populacao;
        float areaEmKmQuadrado;
        float pib;
        int numPontosTuristicos;
    } carta;

    carta carta1,carta2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("\nBem vindo ao jogo do super trunfo! 🎮\n");
    printf("Para iniciarmos, precisamos inserir alguns dados básicos sobre as cidades do nosso país, vamos lá? 🚶‍➡️\n");

    printf("\n-------------------------------------------------------------------------------------------------------\n");

    printf("\n1º insira o estado escolhido representado por uma letra de A - H\n");
    printf("OBS.: deve ser inserido uma única letra, exemplo: A, B, C, D...\n");

    printf("\nEscolha seu estado: ");
    scanf("%s", carta1.estado); // Recebendo dados da estrutura criada

    printf("\n-----------------------\n");

    printf("\n2º Insira o código do estado escolhido representado pela letra seguida do seu número padrão:\n");
    printf("Exemplo: A01, B02, C03, D04...\n");

    printf("\nDigite o código do estado escolhido: ");
    scanf("%s", carta1.codigoEstado);

    printf("\n-----------------------\n");

    printf("\n3º Digite o nome da cidade escolhida: ");
    scanf("%s", &carta1.nomeCidade);

    printf("\n-----------------------\n");

    printf("\n4º Digite o número de habitantes da cidade escolhida: ");
    scanf("%d", &carta1.populacao);

    printf("\n-----------------------\n");

    printf("\n5º Digite área em KM² da cidade escolhida: ");
    scanf("%f", &carta1.areaEmKmQuadrado);

    printf("\n-----------------------\n");

    printf("\n6º Digite produto interno bruto (PIB) da cidade escolhida: ");
    scanf("%f", &carta1.pib);
    
    printf("\n-----------------------\n");

    printf("\n7º Digite o número de pontos turísticos da cidade escolhida: ");
    scanf("%d", &carta1.numPontosTuristicos);

    printf("\n-------------------------------------------------------------------------------------------------------\n");

    printf("\nVocê completou a primeira carta, falta apenas mais uma! Vamos lá? 🚶‍➡️🎮\n");

    printf("\n-------------------------------------------------------------------------------------------------------\n");

    printf("\n1º insira o estado escolhido representado por uma letra de A - H\n");
    printf("OBS.: deve ser inserido uma única letra, exemplo: A, B, C, D...\n");

    printf("\nEscolha seu estado: ");
    scanf("%s", carta2.estado);

    printf("\n-----------------------\n");

    printf("\n2º Insira o código do estado escolhido representado pela letra seguida do seu número padrão:\n");
    printf("Exemplo: A01, B02, C03, D04...\n");

    printf("\nDigite o código do estado escolhido: ");
    scanf("%s", carta2.codigoEstado);

    printf("\n-----------------------\n");

    printf("\n3° Digite o nome da cidade escolhida: ");
    scanf("%s", &carta2.nomeCidade);

    printf("\n-----------------------\n");

    printf("\n4º Digite o número de habitantes da cidade escolhida: ");
    scanf("%d", &carta2.populacao);

    printf("\n-----------------------\n");

    printf("\n5º Digite área em KM² da cidade escolhida: ");
    scanf("%f", &carta2.areaEmKmQuadrado);

    printf("\n-----------------------\n");

    printf("\n6º Digite produto interno bruto (PIB) da cidade escolhida: ");
    scanf("%f", &carta2.pib);
    
    printf("\n-----------------------\n");

    printf("\n7º Digite o número de pontos turísticos da cidade escolhida: ");
    scanf("%d", &carta2.numPontosTuristicos);

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n-------------------------------------------------------------------------------------------------------\n");

    printf("\nUfa 🫠, finalmente acabou! Vamos ver as cartas cadastradas?\n");

    printf("\n-------------------------------------------------------------------------------------------------------\n");

    printf("\nCarta 1:\n"); // Exibindo as cartas
    printf("Estado: %s\n", carta1.estado);
    printf("Código: %s\n", carta1.codigoEstado);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f Km²\n", carta1.areaEmKmQuadrado);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.numPontosTuristicos);

    printf("\n--------------------------------------------------------------------------\n");

    printf("Carta 2:\n"); // Exibindo as cartas
    printf("Estado: %s\n", carta2.estado);
    printf("Código: %s\n", carta2.codigoEstado);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f Km²\n", carta2.areaEmKmQuadrado);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.numPontosTuristicos);

    printf("\n--------------------------------------------------------------------------\n");

    printf("Todas as cartas foram cadastradas com sucesso! ✅");

    return 0;
}