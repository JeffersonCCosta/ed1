#include <stdio.h>
#include <math.h>

int main () {

    float x, y, distancia;

    printf("<< Distância >>\n\n");
    printf("Entre com a coordenada x: ");
    scanf("%f", &x);
    printf("Entre com a coordenada y: ");
    scanf("%f", &y);

    distancia = sqrt (x*x + y*y);

    printf("A distância entre os pontos (%.0f,%.0f) e (0,0) eh %.1f", x,y,distancia);

    return 0;

}