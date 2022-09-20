#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float base,altura;

    printf("Base do retangulo: ");
    scanf("%f",&base);

    printf("Altura do retangulo: ");
    scanf("%f",&altura);

    float area,perimetro,diagonal;

    area = base * altura;
    printf("Area %.4f\n",area);

    perimetro = 2*(base+altura);
    printf("Perimetro %.4f\n",perimetro);

    diagonal = sqrt(base*base+altura*altura);
    printf("Diagonal: %.4f\n",diagonal);

    return 0;
}
