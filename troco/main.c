#include <stdio.h>
#include <stdlib.h>

int main()
{
    float produto, quant, dinh, troco;

    printf("Preco unitario do produto: ");
    scanf("%f",&produto);

    printf("Quantidade comprada: ");
    scanf("%f",&quant);

    printf("Dinheiro recebido: ");
    scanf("%f",&dinh);

    troco = dinh-(produto*quant);
    printf("TROCO: %.1f",troco);
    return 0;
}
