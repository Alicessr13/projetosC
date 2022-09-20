#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros, posicao;

    printf("Quantos numeros vc vai digitar: ");
    scanf("%d",&numeros);

    double vetor[numeros], maior;

    for(int i =0; i<numeros; i++){
        printf("Digite um numero: ");
        scanf("%lf",&vetor[i]);

        if(vetor[i]>maior){
            maior = vetor[i];
        }

        if(vetor[i]==maior){
            posicao = i;
        }
    }

    printf("Maior valor = %.1lf\n",maior);

    printf("Posicao do maior valor: %d\n",posicao);

    return 0;
}
