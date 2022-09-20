#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros, pares;

    printf("Quantos numeros voce vai digitar: ");
    scanf("%d",&numeros);

    int vetor[numeros];

    for(int i=0; i<numeros; i++){
        printf("Digite um numero: ");
        scanf("%d",&vetor[i]);
    }
    printf("\nNUMEROS PARES: \n");
    for(int i = 0; i<numeros; i++){
        if(vetor[i]%2==0){
            printf("%d ",vetor[i]);
            pares = pares +1;
        }

    }
    printf("\n\nQUANTIDADE DE PARES = %d\n",pares);
    return 0;
}
