#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int opcao = 0;
int jogadaHumano = 0;
int jogadaComputador = 0;
int palpite = 0;

void exibirMenuIncial()
{
    printf("Menu principal \n");
    printf("1. Iniciar jogo: \n");
    printf("2. Ver regras: \n");
    printf("3. Sair: \n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
}

void exibirRegra()
{
    printf("As regras do Jokenpô virtual são:\n");
    printf("1. Você jogará contra a máquina.\n");
    printf("2. Os jogadores escolhem uma opção determinada no menu.\n");
    printf("3. No \"já!\", o computador irá receber os dados informados.\n");
    printf("4. A máquina irá analisar quem ganhou e mostrará o resultado.\n");
    printf("5. Pedra ganha da tesoura, tesoura ganha do papel, e papel ganha da pedra.\n");
    printf("6. Se ambos os jogadores escolherem a mesma opção, é empate.\n");
    printf("7. O primeiro jogador a vencer seu oponente duas vezes, vence.\n");
    printf("Para formar os símbolos, os jogadores devem:\n");
    printf("Pedra: escolher opção 1 \n");
    printf("Papel: escolher opção 2 \n");
    printf("Tesoura: escolher opção 3 \n");
    printf("O Jokenpô é um jogo popular em todo o mundo, mas tem origem na China.\n");
    printf("\n================================================================================\n");
    printf("\n Inicie o jogo novamente para poder jogar: \n");
    printf("\n================================================================================\n");
}

void exibirMenuJogo()
{
    printf("Escolha uma das opções abaixo: \n");
    printf("1. Pedra: \n");
    printf("2. Papel: \n");
    printf("3. Tesoura: \n");
    printf("Escolha: ");
    scanf("%d", &jogadaHumano);
}

void exibirEncerramento()
{
    printf("\n================================================================================\n");
    printf("Você escolheu encerrar o jogo, até a proxima!");
    printf("\n================================================================================\n");
}

int main()
{

    srand(time(0));
    jogadaComputador = rand() % 10;

    exibirMenuIncial();

    switch (opcao)
    {
    case 1:
        exibirMenuJogo();
        switch (jogadaHumano)
        {
        case 1:
            jogadaHumano = 1;
            if (jogadaComputador == 3)
            {
                printf("Parabéns, você ganhou da máquina \n");
            }
            else if (jogadaComputador == 2)
            {
                printf("Você perdeu, que pena! Quem sabe a próxima vez... \n");
            }
            else
            {
                printf("Deu empate, tente novamente... \n");
            }
            break;
        case 2:
            jogadaHumano = 2;
            if (jogadaComputador == 1)
            {
                printf("Parabéns, você ganhou da máquina \n");
            }
            else if (jogadaComputador == 3)
            {
                printf("Você perdeu, que pena! Quem sabe a próxima vez... \n");
            }
            else
            {
                printf("Deu empate, tente novamente... \n");
            }
            break;
        case 3:
            jogadaHumano = 3;
            if (jogadaComputador == 2)
            {
                printf("Parabéns, você ganhou da máquina \n");
            }
            else if (jogadaComputador == 1)
            {
                printf("Você perdeu, que pena! Quem sabe a próxima vez... \n");
            }
            else
            {
                printf("Deu empate, tente novamente... \n");
            }
            break;
        default:
            printf("Opção inválida, tente novamente!");
            break;
        }
        break;
    case 2:
        exibirRegra();
        break;
    case 3:
        exibirEncerramento();
        break;
    default:
        printf("Opção inválida!");
    }
}