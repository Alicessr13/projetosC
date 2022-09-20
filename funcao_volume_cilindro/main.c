#include <stdio.h>
#include <stdlib.h>

double voluCilindro(double altura, double raio);

int main()
{
    double raio, altura;
    printf("Valor do raio: ");
    scanf("%lf",&raio);
    printf("Valor da altura: ");
    scanf("%lf",&altura);
    printf("O volume do cilindro circular = %.2lf",voluCilindro(altura,raio));
    return 0;
}

double voluCilindro(double altura, double raio){
    double volume, pi=3.141592;
    volume = pi*(pow(raio,2)*altura);
    return volume;
}
