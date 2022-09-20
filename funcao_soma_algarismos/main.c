#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void somaAlgarismos(int numero);

int main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d",&num);
    somaAlgarismos(num);
    return 0;
}

void somaAlgarismos(int numero){
    int soma=0;
    char resposta[40];
    strcpy(resposta, "numero invalido");
    if(numero>=0){
        while(numero != 0){
        soma = soma +numero % 10;
        numero = numero/10;
        }
        printf("Soma dos algarismo e: %d",soma);
    }
    else{
        printf("%s",resposta);
    }
}
