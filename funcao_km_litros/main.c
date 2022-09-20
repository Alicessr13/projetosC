#include <stdio.h>
#include <stdlib.h>
#include "helper_km_litros.h"
int main()
{
    double km, l;
    printf("Quantos quilometros rodados no percurso? ");
    scanf("%lf",&km);

    printf("Quantos litros consumidos? ");
    scanf("%lf",&l);

    consumo_km_litros(km,l);
    return 0;
}
