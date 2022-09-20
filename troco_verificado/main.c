#include <stdio.h>
#include <stdlib.h>

int main()
{
    float preco, quant, din, total, troco;

    printf("Preço unitario do produto: ");
    scanf("%f",&preco);

    printf("Quantidade comprada: ");
    scanf("%f",&quant);

    total = quant * preco;

    printf("Dinheiro recebido: ");
    scanf("%f",&din);



    if(total<=din){
        troco = din - total;
        printf("TROCO: %.2f",troco);
    }
    if(total>din){
        troco = total - din;
        printf("Dinheiro insuficiente. Faltam %.2f reais ", troco);
    }

    return 0;
}
