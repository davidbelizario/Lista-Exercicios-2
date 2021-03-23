#include <stdio.h>
#include <stdlib.h>
#include "mylib.h"
int main()
{
    float raio, area, volume, diametro, pi;
    pi= 3.14;

    printf("Digite o diametro da esfera:");
    scanf("%f", &diametro);

    calculoEsfera(pi, diametro, &raio, &area, &volume);

    printf("A area da esfera eh: %.0f\n", area);
    printf("O volume da esfera eh: %.0f\n", volume);
    printf("O raio da esfera eh: %.0f\n", raio);
    return 0;
}
