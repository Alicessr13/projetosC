#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c, areaQua, areadotri, areadotrape;

    printf("Digite a medida A: ");
    scanf("%f",&a);

    printf("Digite a medida B: ");
    scanf("%f",&b);

    printf("Digite a medida C: ");
    scanf("%f",&c);

    areaQua = pow(a,2);
    printf("AREA DO QUADRADO: %.4f\n",areaQua);

    areadotri = (a*b)/2;
    printf("AREA DO TRIANGULO: %.4f\n",areadotri);

    areadotrape = ((a+b)*c)/2;
    printf("AREA DO TRAPEZIO: %.4f\n",areadotrape);

    return 0;
}
