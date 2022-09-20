#include <stdio.h>
#include <stdlib.h>

int main()
{
    float distancia, gasto, consumo;

    printf("Distancia percorida: ");
    scanf("%f",&distancia);

    printf("Combustivel gasto: ");
    scanf("%f",&gasto);

    consumo = distancia/gasto;

    printf("Consumo medio: %.3f",consumo);
    return 0;
}
