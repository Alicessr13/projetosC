#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double hipotenusa(double cateA, double cateB);

int main()
{
    double a, b;

    printf("Cateto A: ");
    scanf("%lf",&a);

    printf("Cateto B: ");
    scanf("%lf",&b);

    printf("O valor da hipotenusa e: %.2lf",hipotenusa(a,b));

    return 0;
}

double hipotenusa(double cateA, double cateB){
    double hipotenu;
    hipotenu = sqrt((pow(cateA,2)+pow(cateB,2)));
    return hipotenu;
}
