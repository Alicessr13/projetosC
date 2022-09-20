#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros;

    printf("quantos numeros vai ter cada vetor: ");
    scanf("%d",&numeros);

    int vetor[numeros], vetor2[numeros], vetor3[numeros];

    printf("Digite os valores do vetor A: \n");
    for(int i=0; i<numeros; i++){
        scanf("%d",&vetor[i]);
    }

    printf("Digite os valores do vetor B: \n");
    for(int i=0; i<numeros; i++){
        scanf("%d",&vetor2[i]);
    }

    printf("Vetor resultante: \n");
    for(int i=0; i<numeros; i++){
        vetor3[i] = vetor[i] + vetor2[i];
    }

    for(int i=0; i<numeros; i++){
        printf("%d\n",vetor3[i]);
    }
    return 0;
}
