#include <stdio.h>
#include <stdlib.h>

int main()
{
    float largura, comprimento, valor, area, valorterreno;

    printf("Digite a largura do terreno: ");
    scanf("%f",&largura);

    printf("Digite o comprimento do terreno: ");
    scanf("%f",&comprimento);

    printf("Digite o valor do metro quadrado: ");
    scanf("%f",&valor);

    area = largura*comprimento;
    printf("A area do terreno e: %.2f\n",area);

    valorterreno = area*valor;
    printf("O valor do terreno e: %.2f\n",valorterreno);
    return 0;
}
