#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros;

    printf("Quantos numeros vc vai digitar: ");
    scanf("%d",&numeros);

    int vetor[numeros];

    for(int i = 0; i<numeros; i++){
        printf("Digite um numero: ");
        scanf("%d",&vetor[i]);
    }
    printf("NUMEROS NEGATIVOS: \n");
    for(int i = 0; i<numeros; i++){
        if(vetor[i]<0){
            printf("%d\n",vetor[i]);
        }
    }
    return 0;
}
