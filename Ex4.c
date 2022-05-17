#include <stdio.h>

int main () {

    printf("<< Calculo IMC >>\n\n");

    float massa, altura, imc;
    char nome[50];

    printf("Diga seu nome: ");
    scanf("%s", nome);
    printf("Digite a masssa: ");
    scanf("%f", &massa);
    printf("Digite a altura: ");
    scanf("%f", &altura);

    imc = massa / ( altura * altura);

    if (imc < 18.5){
        printf("%s, seu IMC é %.2f que classifica como: MAGREZA", nome, imc);
    } else if (imc >= 18.5 && imc < 24.9){
        printf("%s, seu IMC é %.2f que classifica como: SAUDÁVEL", nome, imc);
    } else if (imc > 25.0 && imc < 29.9){
        printf("%s, seu IMC é %.2f que classifica como: SOBREPESO", nome, imc);
    } else if (imc > 30.0 && imc < 34.9){
        printf("%s, seu IMC é %.2f que classifica como: OBESIDADE GRAL I", nome, imc);
    } else if (imc > 35.0 && imc < 39.9){
        printf("%s, seu IMC é %.2f que classifica como: OBESIDADE GRAU II (SEVERA)", nome, imc);
    } else if (imc >= 40.0){
        printf("%s, seu IMC é %.2f que classifica como: OBESIDADE GRAU III (MORBIDA)", nome, imc);

    }
    
    return 0;

}