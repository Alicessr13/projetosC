#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor =50.00, minutos, min_mais;

    printf("Digite a quantidade de minutos: ");
    scanf("%f",&minutos);

    if(minutos>100){
        min_mais = minutos - 100;
        valor = 50.00 + (min_mais * 2);
        printf("Valor a pagar: %.2f", valor);
    }
    else{
        printf("Valor a pagar: %.2f",valor);
    }

    return 0;
}
