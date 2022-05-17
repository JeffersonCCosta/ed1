#include <stdio.h>

int main () {

    printf("<< Loteria >>\n\n");

    float jogador1, jogador2, jogador3, premio;

    printf("Bolão jogador 1 R$: ");
    scanf("%f", &jogador1);
    printf("Bolão jogador 2 R$: ");
    scanf("%f", &jogador2);
    printf("Bolão jogador 3 R$: ");
    scanf("%f", &jogador3);
    printf("Informe o valor do prêmio: ");
    scanf("%f", &premio);

    jogador1 = premio * ((jogador1/100) * 10);
    jogador2 = premio * ((jogador2/100) * 10);
    jogador3 = premio * ((jogador3/100) * 10);

    printf("Jogador 1 receberá R$: %0.1f\n", jogador1);
    printf("Jogador 2 receberá R$: %0.1f\n", jogador2);
    printf("Jogador 3 receberá R$: %0.1f\n", jogador3);

    return 0;
}