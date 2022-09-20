#include <stdio.h>
#include <stdlib.h>

double cTOf(double celsius);

int main()
{
    double graus;
    printf("Digite a temperatura em graus celsius: ");
    scanf("%lf",&graus);

    printf("A temperatura %.1lf em fahrenheit = %.1lf",graus,cTOf(graus));
    return 0;
}

double cTOf(double celsius){
    double fahrenheit;
    fahrenheit = (celsius*1.8)+32;
    return fahrenheit;
}
