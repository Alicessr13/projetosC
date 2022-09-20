#include <stdio.h>
#include <stdlib.h>

int main()
{

    float quant, valor, total, codprod;;

    printf("Codigo do produto comprado: ");
    scanf("%f",&codprod);

    if(codprod == 1){
        valor = 5.00;
    }
    if(codprod == 2){
        valor = 3.50;
    }
    if(codprod == 3){
        valor = 4.80;
    }
    if(codprod == 4){
        valor = 8.90;
    }
    if(codprod == 5){
        valor = 7.32;
    }

    printf("Quantidade comprada: ");
    scanf("%f",&quant);

    total = valor *quant;

    printf("Valor a pagar: %.2f",total);

    return 0;
}
