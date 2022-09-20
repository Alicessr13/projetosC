#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void quadperf(double num){
    if(sqrt(num)==(int)sqrt(num)){
        printf("O numero %.1lf e um quadrado perfeito",num);
    }
    else{
        printf("O numero %.1lf nao e um quadrado perfeito",num);
    }
}
int main()
{
    double numero;
    printf("Digite um numero: ");
    scanf("%lf",&numero);
    printf("\n");
    quadperf(numero);
    printf("\n");
    return 0;
}
