#include <stdio.h>

int main () {

    printf("== Conversor de números binários ==\n\n");

    int bit1, bit2, bit3, bit4, dec;
    int aux1, aux2, aux3, aux4;
    
    printf("Digite o 1o. bit: ");
    scanf("%d", &bit1);
    printf("Digite o 2o. bit: ");
    scanf("%d", &bit2);
    printf("Digite o 3o. bit: ");
    scanf("%d", &bit3);
    printf("Digite o 4o. bit: ");
    scanf("%d", &bit4);

    aux1 = bit1;
    aux2 = bit2;
    aux3 = bit3;
    aux4 = bit4;

    bit1 = 8 * bit1;
    bit2 = 4 * bit2;
    bit3 = 2 * bit3;
    bit4 = 1 * bit4;
    dec = bit1 + bit2 + bit3 + bit4;

    printf("O número binário %d%d%d%d corresponde ao número decimal %d", aux1, aux2, aux3, aux4, dec);

    return 0;
}