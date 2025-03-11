#include <stdio.h>

// Teste Pedro Fabiano Vieira dos Santos

typedef struct // Criei uma estrutura para que não fosse necessário criar uma variável única para cada carta
{
    char estado[3];
    char codigoEstado[5];
    char nomeCidade[50];
    unsigned long int populacao;
    float areaEmKmQuadrado;
    float pib;
    int numPontosTuristicos;
} carta;

carta carta1, carta2;

float calcularDensidadePopulacional(float populacao, float area)
{
    float densidadeCarta = populacao / area;

    return densidadeCarta;
};

float calcularPibPerCapita(float pib, int populacao)
{
    float pibPerCapita = (pib * 1e9) / populacao; // Convertendo o numero para reais

    return pibPerCapita;
};

float calcularSuperPoder(int populacao, float areaEmKmQuadrado, float pib, int numPontosTuristicos, float pibPerCapita, float densidadePopulacional) {

    float superPoder = (float) populacao + areaEmKmQuadrado + pib + numPontosTuristicos + pibPerCapita + (1 / densidadePopulacional);

    return superPoder;

}

void exibirCartas(char estado[3], char codEstado[5], char nomeCidade[50], int populacao, float areaEmKmQuadrado, float pib, int numPontosTuristicos)
{
    // Exibindo as cartas
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codEstado);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f Km²\n", areaEmKmQuadrado);
    printf("PIB: %f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos);
    printf("Densidade populacional: %.2f hab/km² \n", calcularDensidadePopulacional(populacao, areaEmKmQuadrado));
    printf("PIB per capita: %.5f mil reais \n", calcularPibPerCapita(pib, populacao));
    printf("Super Poder é: %f", calcularSuperPoder(populacao, areaEmKmQuadrado, pib, numPontosTuristicos, calcularPibPerCapita(pib, populacao), calcularDensidadePopulacional(populacao, areaEmKmQuadrado)));
};

int main()
{
    // Cadastro das Cartas:

    printf("\nBem vindo ao jogo do super trunfo! 🎮\n");
    printf("Para iniciarmos, precisamos inserir alguns dados básicos sobre as cidades do nosso país, vamos lá? 🚶‍➡️\n");

    printf("\n-------------------------------------------------------------------------------------------------------\n");

    printf("\n1º insira o estado escolhido representado por uma letra de A - H\n");
    printf("OBS.: deve ser inserido uma única letra, exemplo: A, B, C, D...\n");

    printf("\nEscolha seu estado: ");
    scanf("%s", &carta1.estado); // Recebendo dados da estrutura criada

    printf("\n-----------------------\n");

    printf("\n2º Insira o código do estado escolhido representado pela letra seguida do seu número padrão:\n");
    printf("Exemplo: A01, B02, C03, D04...\n");

    printf("\nDigite o código do estado escolhido: ");
    scanf("%s", &carta1.codigoEstado);

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
    scanf("%s", &carta2.estado); // Recebendo dados da estrutura criada

    printf("\n-----------------------\n");

    printf("\n2º Insira o código do estado escolhido representado pela letra seguida do seu número padrão:\n");
    printf("Exemplo: A01, B02, C03, D04...\n");

    printf("\nDigite o código do estado escolhido: ");
    scanf("%s", &carta2.codigoEstado);

    printf("\n-----------------------\n");

    printf("\n3º Digite o nome da cidade escolhida: ");
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

    printf("\n-------------------------------------------------------------------------------------------------------\n");

    printf("\nUfa 🫠, finalmente acabou! Vamos ver as cartas cadastradas?\n");

    printf("\n-------------------------------------------------------------------------------------------------------\n");

    printf("\nCarta 1:\n");
    exibirCartas(carta1.estado, carta1.codigoEstado, carta1.nomeCidade, carta1.populacao, carta1.areaEmKmQuadrado, carta1.pib, carta1.numPontosTuristicos);

    printf("\n--------------------------------------------------------------------------\n");

    printf("\nCarta 2:\n");
    exibirCartas(carta2.estado, carta2.codigoEstado, carta2.nomeCidade, carta2.populacao, carta2.areaEmKmQuadrado, carta2.pib, carta2.numPontosTuristicos);

    printf("\n--------------------------------------------------------------------------\n");

    printf("Todas as cartas foram cadastradas com sucesso! ✅");

    printf("\n--------------------------------------------------------------------------\n");

    printf("\nAgora vamos descobrir os vencedores 🎮🥳🥳🥳\n");

    printf("\n--------------------------------------------------------------------------\n");

    int vencedorPopulacao = carta1.populacao > carta2.populacao;
    int vencedorArea = carta1.areaEmKmQuadrado > carta2.areaEmKmQuadrado;
    int vencedorPib = carta1.pib > carta2.pib;
    int vencedorPontosTuristicos = carta1.numPontosTuristicos > carta2.numPontosTuristicos;
    int vencedorDensidadePopulacional = calcularDensidadePopulacional(carta1.populacao, carta1.areaEmKmQuadrado) > calcularDensidadePopulacional(carta2.populacao, carta2.areaEmKmQuadrado);
    int vencedorPibPerCapita = calcularPibPerCapita(carta1.pib, carta1.populacao) > calcularPibPerCapita(carta2.pib, carta2.populacao);
    int vencedorSuperPoder = calcularSuperPoder( carta1.populacao, carta1.areaEmKmQuadrado, carta1.pib, carta1.numPontosTuristicos, calcularPibPerCapita(carta1.pib, carta1.populacao), calcularDensidadePopulacional(carta1.populacao, carta1.areaEmKmQuadrado) ) > calcularSuperPoder( carta2.populacao, carta2.areaEmKmQuadrado, carta2.pib, carta2.numPontosTuristicos, calcularPibPerCapita(carta2.pib, carta2.populacao), calcularDensidadePopulacional(carta2.populacao, carta2.areaEmKmQuadrado) );
    

    printf("Comparação de Cartas: \n");
    printf("População da Carta 1 venceu? (%d) \n", vencedorPopulacao);
    printf("Área da Carta 1 venceu? (%d) \n", vencedorArea);
    printf("PIB da Carta 1 venceu? (%d) \n", vencedorPib);
    printf("Pontos turísticos da Carta 1 venceu? (%d) \n", vencedorPontosTuristicos);
    printf("Densidade populacional da Carta 1 venceu? (%d) \n", vencedorDensidadePopulacional);
    printf("Pib Per Capita da Carta 1 venceu? (%d) \n", vencedorPibPerCapita);
    printf("Super poder da Carta 1 venceu? (%d) \n", vencedorSuperPoder);

    return 0;
}