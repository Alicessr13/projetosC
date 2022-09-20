#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros, soma = 0, media, divisao;
    printf("Quantos elementos vai ter o vetor? ");
    scanf("%d",&numeros);

    int vetor[numeros];

    for(int i =0; i<numeros; i++){
        printf("Digite um numero: ");
        scanf("%d",&vetor[i]);
    }

    for(int i=0; i<numeros; i++){
        if(vetor[i]%2==0){
            soma = soma+vetor[i];
            divisao = divisao+1;
        }
    }

    if(soma!=0){
        media = soma/divisao;
        printf("Media dos pares: %d",media);
    }
    else{
        printf("Nenhum numero par!");
    }
    return 0;
}
