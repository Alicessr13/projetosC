#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double volEsfera(double raio);

int main()
{
    double num;
    printf("Digite o valor do raio: ");
    scanf("%lf",&num);
    printf("O volume da esfera e: %.2lf",volEsfera(num));
    return 0;
}

double volEsfera(double raio){
    double pi=3.14, volume;
    volume = (4*pi*pow(raio,3))/3;
    return volume;
}
