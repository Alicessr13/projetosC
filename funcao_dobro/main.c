#include <stdio.h>
#include <stdlib.h>

int dobro(int num){
    return num*2;
}

void mostradobro(int num){
    printf("O dobro de %d e: %d",num,num*2);
}

int main()
{
    int numero;
    printf("Digite um numero: ");
    scanf("%d",&numero);

    mostradobro(numero);

    printf("\n");

    printf("O dobro de %d e: %d",numero,dobro(numero));
    return 0;
}
