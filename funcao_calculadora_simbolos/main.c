#include <stdio.h>
#include <stdlib.h>
#include "helper_calculadora_simbolos.h"
int main()
{
    double valor1, valor2;
    char conta;

    printf("Digite os 2 valores: \n");
    scanf("%lf %lf",&valor1,&valor2);

    setbuf(stdin,NULL);
    printf("Qual operacao? [-,+,/,*]");
    scanf("%[^\n]",&conta);

    printf("O resultado e: %.2lf",calc_simbolos(valor1,valor2,conta));

    return 0;
}

