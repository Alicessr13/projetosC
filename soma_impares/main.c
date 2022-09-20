#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, numero2, troca, soma;
    printf("Digite 2 numeros: \n");
    scanf("%d %d",&numero,&numero2);


    if(numero>numero2){
        troca = numero;
        numero = numero2;
        numero2 = troca;
    }

    soma = 0;

    for(int i = numero+1; i<numero2; i++){
        if(i%2 != 0){
            soma = soma +i;
        }

    }

    printf("soma dos impares: %d",soma);

    return 0;
}
