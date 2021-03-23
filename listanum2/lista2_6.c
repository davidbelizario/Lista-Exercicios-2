#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct ponto
{
    int x;
    int y;
};

void main()
{
    struct ponto ponto1, ponto2;

    float altura, base, diagonal, perimetro, area;
    printf("Digite o ponto X superior esquerdo do retangulo: ");
    scanf("%d", &ponto1.x);
    printf("\Digite o ponto Y superior esquerdo do retangulo: ");
    scanf("%d", &ponto1.y);

    printf("\Digite o ponto X inferior direito do retangulo: ");
    scanf("%d", &ponto2.x);
    printf("\Digite o ponto Y inferior direito do retangulo: ");
    scanf("%d", &ponto2.y);

    altura = sqrt(pow(ponto1.x - ponto1.x, 2)+pow(ponto1.y - ponto2.y, 2));
    base = sqrt(pow(ponto2.x - ponto1.x, 2)+pow(ponto2.y - ponto2.y, 2));
    perimetro = (altura+base)*2;
    diagonal = sqrt(pow(ponto2.x-ponto1.x, 2)+ pow(ponto2.y-ponto1.y, 2));
    area= altura*base;


    printf("Comprimento da diagonal: %f\n", diagonal);
    printf("Perimetro: %f\n", perimetro);
    printf("Area: %f\n", area);
}
